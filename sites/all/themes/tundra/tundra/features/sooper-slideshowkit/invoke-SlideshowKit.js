$ = jQuery.noConflict(); // Make sure jQuery owns $ here

/**
 * Using window.load instead of document.ready is a requirement for compatibility
 * with fluid images. If images (used as slides) have no dimensions set webkit
 * browsers will fail to properly scale the slider.
 */
var started = 0;
var pagerEl = '.cycle-pager';
var pagerAnchor = null;
$(window).load(function() {
  cycleStart();
  $(window).resize(function() {
    cycleStart();
  });
});
function cycleStart() {
  // Remove contextual links, they mess up the cycle pager
  $('.block').has(Drupal.settings.slideshowKit.invoke).find('.contextual-links-wrapper').remove();

  if (parseInt(Drupal.settings.slideshowKit.showPager) && (started != 1)) {
    $(Drupal.settings.slideshowKit.invoke).after('<div class="wrap-cycle-pager"><ul class="cycle-pager">');
    pagerAnchor = function(idx, slide) {return '<li><a href="#">' + idx + '</a></li>';}
  }
  if (parseInt(Drupal.settings.slideshowKit.imgPager) && (started != 1)) {
    pagerAnchor = function(idx, slide) {return '<li><a href="#"><img src="' + slide.src + '" width="100" height="100" /></a></li>';}
  }

  if (started) {
    pagerEl = null;
  }

  /**
   * @code
   * force the slideshow to cover entire width
   */
  $(Drupal.settings.slideshowKit.invoke).width('100%');
  $(Drupal.settings.slideshowKit.invoke + '>*').width('100%').height('auto');

  $(Drupal.settings.slideshowKit.invoke).cycle({
    fx:                   Drupal.settings.slideshowKit.fx,
    timeout:              parseInt(Drupal.settings.slideshowKit.timeout),
    continuous:           parseInt(Drupal.settings.slideshowKit.continuous),
    speed:                parseInt(Drupal.settings.slideshowKit.speed),
    pagerEvent:           Drupal.settings.slideshowKit.pagerEvent,
    easing:               Drupal.settings.slideshowKit.easing,
    random:               parseInt(Drupal.settings.slideshowKit.random),
    pause:                parseInt(Drupal.settings.slideshowKit.pause),
    pauseOnPagerHover:    parseInt(Drupal.settings.slideshowKit.pauseOnPagerHover),
    delay:                parseInt(Drupal.settings.slideshowKit.delay),
    pager:                pagerEl,
    pagerAnchorBuilder:   pagerAnchor,
    /**
     * @code
     * For the slides cycle has built in fitting and forced aspec-ratio
     * ...perfect for our flexible slider.
     */
    fit: 1,
    aspect: 1
  });

  /**
   * @ code
   * This is required to force the browse to upscale image slides at window.resize
   * (e.g. when switching from portrait to landscape mode)
   */
  $(Drupal.settings.slideshowKit.invoke).width('100%').height($(Drupal.settings.slideshowKit.invoke + '>:first-child').height());

  // Keep track of restarts
  started = 1;
}
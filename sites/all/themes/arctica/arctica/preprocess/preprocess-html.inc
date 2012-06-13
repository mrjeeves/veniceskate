<?php

global $base_path;
$abs_arctica_theme_path = $base_path . drupal_get_path('theme', 'arctica');
$vars['arctica_head'] = '';

if (theme_get_setting('futurecss_enable')) {
  /* This should be available before any CSS */
  $vars['arctica_head'] .= '<script>window.piePath = "' . $abs_arctica_theme_path . '/features/arctica-cssfuture/PIE' . '";</script>';
}

if (theme_get_setting('meta')) {
  $vars['arctica_head'] .= theme_get_setting('meta');
} else {
  $vars['arctica_head'] .= '';
}

$cond_top = $cond_bottom = '';
if (theme_get_setting('html_polyfill')) {
  $cond_top .= '<!--[if (lt IE 9) ]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->';
}
if (theme_get_setting('responsive_enable') && theme_get_setting('responsive_polyfill')) {
  $cond_top .= '<!--[if (lt IE 9) & (!IEMobile)]><script src="' . $abs_arctica_theme_path . '/scripts/polyfills/respond.min.js"></script><![endif]-->';
}
if (theme_get_setting('responsive_enable') && theme_get_setting('responsive_polyfill2')) {
  $cond_top .= '<!--[if (lt IE 9) & (!IEMobile)]><script src="' . $abs_arctica_theme_path . '/scripts/polyfills/css3-mediaqueries.js"></script><![endif]-->';
}
if (theme_get_setting('selectivizr_polyfill')) {
  $cond_top .= '<!--[if (lt IE 9) ]><script src="' . $abs_arctica_theme_path . '/scripts/polyfills/selectivizr-min"></script><![endif]-->';
}
if (theme_get_setting('flexible_images_polyfill')) {
  $cond_bottom .= '<!--[if (lt IE 8) ]><script src="' . $abs_arctica_theme_path . '/scripts/polyfills/imgSizer.min.js"></script><![endif]-->';
}
$cond_bottom .= '<div style="display:none">glqxz9283 sfy39587stf02 mnesdcuix8</div>';

$vars['cond_scripts_top'] = $cond_top;
$vars['cond_scripts_bottom'] = $cond_bottom;

/**
 * If a theme wants to use advanced backgrounds these must go into their own
 * tags since they will have to use IE proprietary filters in order to work in
 * IE LTE IE8. Setting IE filters on the body tags causes problems.
 */
$vars['page_backgrounds'] = '';

if (theme_get_setting('gradient_enable')) {
  $vars['page_backgrounds'] .= '<div class="bg-gradient"></div>';
}

if (theme_get_setting('bg_image_enable')) {
  $vars['page_backgrounds'] .= '<div class="bg-image"></div>';
}
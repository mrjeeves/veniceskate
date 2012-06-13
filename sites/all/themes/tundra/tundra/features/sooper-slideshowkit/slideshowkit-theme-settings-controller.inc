<?php
if (theme_get_setting('slideshowkit_enable')) {

  drupal_add_js(array('slideshowKit' => array('invoke' => theme_get_setting('cycle_invoke'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('fx' => theme_get_setting('cycle_fx'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('timeout' => theme_get_setting('cycle_timeout'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('continuous' => theme_get_setting('cycle_continuous'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('speed' => theme_get_setting('cycle_speed'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('easing' => theme_get_setting('cycle_easing'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('random' => theme_get_setting('cycle_random'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('pause' => theme_get_setting('cycle_pause'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('showPager' => theme_get_setting('cycle_showPager'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('pagerEvent' => theme_get_setting('cycle_pagerEvent'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('pauseOnPagerHover' => theme_get_setting('cycle_pauseOnPagerHover'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('delay' => theme_get_setting('cycle_delay'))), 'setting');
  drupal_add_js(array('slideshowKit' => array('imgPager' => theme_get_setting('cycle_img_pager'))), 'setting');

  if ((theme_get_setting('cycle_easing')) && (theme_get_setting('cycle_easing') != 'linear') && (theme_get_setting('cycle_easing') != 'swing')) {
    drupal_add_js($tundra_theme_path . '/scripts/jquery.easing-sooper.js');
  }
  if (is_file($tundra_theme_path . '/features/sooper-slideshowkit/jquery.cycle.all.min.js')) {
    drupal_add_js($tundra_theme_path . '/features/sooper-slideshowkit/jquery.cycle.all.min.js');
  }
  if (is_file($tundra_theme_path . '/features/sooper-slideshowkit/invoke-SlideshowKit.js')) {
    drupal_add_js($tundra_theme_path . '/features/sooper-slideshowkit/invoke-SlideshowKit.js');
  }
}
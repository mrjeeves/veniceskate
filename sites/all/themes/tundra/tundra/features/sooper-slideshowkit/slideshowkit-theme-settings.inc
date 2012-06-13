<?php
$form['arctica_settings']['slideshowkit'] = array(
  '#title' => t('Sooper SlideshowKit'),
  '#type' => 'fieldset',
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
  '#weight' => 3,
);

$form['arctica_settings']['slideshowkit']['slideshowkit_enable'] = array(
  '#type'          => 'checkbox',
  '#title'         => t('Enable Sooper SlideshowKit'),
  '#default_value' => theme_get_setting('slideshowkit_enable'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings'] = array(
  '#title' => t('SlideshowKit Settings'),
  '#type' => 'fieldset',
  '#collapsible' => TRUE,
  '#collapsed' => FALSE,
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_invoke'] = array(
  '#type' => 'textfield',
  '#title' => t('Element for slideshow invocation'),
  '#default_value' => theme_get_setting('cycle_invoke'),
  '#description' => t('Enter a jQuery- or CSS selector to mark the element(s) containing slides.'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_fx'] = array(
  '#type' => 'select',
  '#title' => t('Transition Animation'),
  '#default_value' => theme_get_setting('cycle_fx'),
  '#description' => t('Select transition effects for slide interchanges.'),
  '#options'       => array(
  'blindX' => t('blindX'),
  'blindY' => t('blindY'),
  'blindZ' => t('blindZ'),
  'cover' => t('cover'),
  'curtainX' => t('curtainX'),
  'curtainY' => t('curtainY'),
  'fade' => t('fade'),
  'fadeZoom' => t('fadeZoom'),
  'growX' => t('growX'),
  'growY' => t('growY'),
  'scrollUp' => t('scrollUp'),
  'scrollDown' => t('scrollDown'),
  'scrollLeft' => t('scrollLeft'),
  'scrollRight' => t('scrollRight'),
  'scrollHorz' => t('scrollHorz'),
  'scrollVert' => t('scrollVert'),
  'shuffle' => t('shuffle'),
  'slideX' => t('slideX'),
  'slideY' => t('slideY'),
  'toss' => t('toss'),
  'turnUp' => t('turnUp'),
  'turnDown' => t('turnDown'),
  'turnLeft' => t('turnLeft'),
  'turnRight' => t('turnRight'),
  'uncover' => t('uncover'),
  'wipe' => t('wipe'),
  'zoom' => t('zoom'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_speed'] = array(
  '#type' => 'textfield',
  '#title' => t('speed'),
  '#default_value' => theme_get_setting('cycle_speed'),
  '#size' => 5,
  '#maxlength' => 5,
  '#description' => t('Enter the speed of the transition in milliseconds.'),
  '#element_validate' => array('_arctica_is_number'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_timeout'] = array(
  '#type' => 'textfield',
  '#title' => t('Timeout'),
  '#default_value' => theme_get_setting('cycle_timeout'),
  '#size' => 5,
  '#maxlength' => 5,
  '#description' => t('Enter time in milliseconds between slide transitions (0 to disable auto advance).'),
  '#element_validate' => array('_arctica_is_number'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_delay'] = array(
  '#type' => 'textfield',
  '#title' => t('Delay'),
  '#default_value' => theme_get_setting('cycle_delay'),
  '#size' => 5,
  '#maxlength' => 5,
  '#description' => t('Enter the additional delay (in ms) for first transition (Can be negative).'),
  '#element_validate' => array('_arctica_is_number'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_easing'] = array(
  '#type' => 'select',
  '#title' => t('Animation Easing'),
  '#default_value' => theme_get_setting('cycle_easing'),
  '#options' => $easing_options,
  '#description' => t('Select the function by which the animation gains speed.'),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_random'] = array(
  '#type' => 'select',
  '#title' => t('Slides ordering'),
  '#default_value' => theme_get_setting('cycle_random'),
  '#description' => t('Select either sequentially ordered slides or play in random order.'),
  '#options' => array(
    '0' => t('Sequential'),
    '1' => t('Random'),
  ),

);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_continuous'] = array(
  '#type' => 'select',
  '#title' => t('Continous play'),
  '#default_value' => theme_get_setting('cycle_continuous'),
  '#description' => 'Select if you want the next transition to start as soon as the current transition ends.',
  '#options' => array(
    '0' => t('No'),
    '1' => t('Yes'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_pause'] = array(
  '#type' => 'select',
  '#title' => t('Pause on hover'),
  '#default_value' => theme_get_setting('cycle_pause'),
  '#description' => 'Select if you want to pause the slideshow when any element inside it is hovered.',
  '#options' => array(
    '0' => t('No'),
    '1' => t('Yes'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_showPager'] = array(
  '#type' => 'select',
  '#title' => t('Show Pager'),
  '#default_value' => theme_get_setting('cycle_showPager'),
  '#description' => t('Adds a pager to the slideshow'),
  '#options' => array(
    '0' => t('No'),
    '1' => t('Yes'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_pagerEvent'] = array(
  '#type' => 'select',
  '#title' => t('Pager Event'),
  '#default_value' => theme_get_setting('cycle_pagerEvent'),
  '#description' => t('Select the event that signifies a pager action.'),
  '#options' => array(
    'mouseover' => t('hover'),
    'click' => t('click'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_pauseOnPagerHover'] = array(
  '#type' => 'select',
  '#title' => t('Pause on pager hover'),
  '#default_value' => theme_get_setting('cycle_pauseOnPagerHover'),
  '#description' => 'Select if you want to pause the slideshow when the pager is hovered.',
  '#options' => array(
    '0' => t('No'),
    '1' => t('Yes'),
  ),
);

$form['arctica_settings']['slideshowkit']['slideshowkit_settings']['cycle_img_pager'] = array(
  '#type' => 'select',
  '#title' => t('Image pager. Only works if slides are image tags.'),
  '#default_value' => theme_get_setting('cycle_img_pager'),
  '#description' => 'Select if you want to automatically created thumbnails from the slides. This only works if the slides are images.',
  '#options' => array(
    '0' => t('No'),
    '1' => t('Yes'),
  ),
);

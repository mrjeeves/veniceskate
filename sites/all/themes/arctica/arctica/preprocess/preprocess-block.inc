<?php

$vars['title_attributes_array']['class'][] = 'block-title';

/**
 * @code for certain regions it makes more sense to stack blocks horizontally rather than vertically
 * @todo give configurator per-region per-@media control over this.
 */
$region_count = count(block_list($vars['block']->region));
$dynamic_regions = array('preblocks', 'postblocks', 'footer');
if (in_array($vars['block']->region, $dynamic_regions)) {
  $frac = min('8', $region_count);
  $vars['classes_array'][] = 'grid-1-' . $frac;
}

// Special classes for blocks
$vars['classes_array'][] = 'block-' . $vars['block']->module;
$vars['classes_array'][] = ($vars['block_id'] == 1) ? 'first' : '';
$vars['classes_array'][] = ($vars['block_id'] == $region_count) ? 'last' : '';


// Template suggestions extensions

$nav_blocks = array('navigation', 'main-menu', 'management', 'user-menu', 'superfish', 'nice_menus', 'superfish', 'nice_menus', 'popular-block');
if (in_array($vars['block']->delta, $nav_blocks)) {
  $vars['theme_hook_suggestions'][] = 'block__menu';
}

$vars['theme_hook_suggestions'][] = 'block__' . $vars['block']->region . '__' . $vars['block']->module;
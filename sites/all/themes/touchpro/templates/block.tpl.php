<?php
/**
 * @file
 * Default theme implementation to display a block.
 */
?>
<article id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="grid-inner">
  <?php if ($block->subject): ?>
    <header>
      <?php print render($title_prefix); ?>
      <h2<?php print $title_attributes; ?>><?php print $block->subject; ?></h2>
      <?php print render($title_suffix); ?>
    </header>
  <?php elseif ($title_suffix): ?>
      <?php print render($title_suffix); ?>
  <?php endif; ?>
    <div class="block-content content">
      <?php print $content ?>
    </div>
  </div>
</article>

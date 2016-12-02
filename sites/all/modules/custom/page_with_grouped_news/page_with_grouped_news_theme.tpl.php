<?php

/**
 * @file
 * Default simple view template to display a list of summary lines.
 *
 * @ingroup views_templates

 * Template file for list
 */
?>
<div class="item-list">
    <ul>
    <?php foreach ($items as $id => $row): ?>
        <li><?php print $row['data']; ?>
            <ul>
                <?php foreach ($row['children'] as $title): ?>
                    <li><?php print $title['data']; ?></li>
                <?php endforeach; ?>
            </ul>
        </li>

    <?php endforeach;?>
    </ul>
</div>

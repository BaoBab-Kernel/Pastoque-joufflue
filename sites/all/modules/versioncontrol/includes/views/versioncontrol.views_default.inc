<?php

/**
 * Implements hook_views_default_views().
 */
function versioncontrol_views_default_views() {
  $views = array();

  // versioncontrol_repositories

  $view = new view;
  $view->name = 'versioncontrol_repositories';
  $view->description = 'Provides an admin list of versioncontrol repositories.';
  $view->tag = 'VersionControl Core';
  $view->base_table = 'versioncontrol_repositories';
  $view->human_name = 'Versioncontrol repositories administration list';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer version control systems';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'repo_id' => 'repo_id',
    'name' => 'name',
    'vcs' => 'vcs',
    'root' => 'root',
    'update_method' => 'update_method',
    'actions' => 'actions',
    'updated' => 'updated',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'repo_id' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'vcs' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'root' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'update_method' => array(
      'separator' => '',
    ),
    'actions' => array(
      'separator' => '',
    ),
    'updated' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  /* Field: VersionControl Repository: Repository ID */
  $handler->display->display_options['fields']['repo_id']['id'] = 'repo_id';
  $handler->display->display_options['fields']['repo_id']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['repo_id']['field'] = 'repo_id';
  $handler->display->display_options['fields']['repo_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['repo_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['repo_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['repo_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['repo_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['repo_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['repo_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['repo_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['repo_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['repo_id']['empty_zero'] = 0;
  /* Field: VersionControl Repository: Repository Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  /* Field: VersionControl Repository: Root Path */
  $handler->display->display_options['fields']['root']['id'] = 'root';
  $handler->display->display_options['fields']['root']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['root']['field'] = 'root';
  $handler->display->display_options['fields']['root']['label'] = 'Root';
  $handler->display->display_options['fields']['root']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['root']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['root']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['root']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['root']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['root']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['root']['alter']['html'] = 0;
  $handler->display->display_options['fields']['root']['hide_empty'] = 0;
  $handler->display->display_options['fields']['root']['empty_zero'] = 0;
  /* Field: VersionControl Repository: Last Updated */
  $handler->display->display_options['fields']['updated']['id'] = 'updated';
  $handler->display->display_options['fields']['updated']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['updated']['field'] = 'updated';
  $handler->display->display_options['fields']['updated']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['updated']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['updated']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['updated']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['updated']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['updated']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['updated']['alter']['html'] = 0;
  $handler->display->display_options['fields']['updated']['hide_empty'] = 0;
  $handler->display->display_options['fields']['updated']['empty_zero'] = 0;
  $handler->display->display_options['fields']['updated']['date_format'] = 'time span';
  /* Field: VersionControl Repository: Update method */
  $handler->display->display_options['fields']['update_method']['id'] = 'update_method';
  $handler->display->display_options['fields']['update_method']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['update_method']['field'] = 'update_method';
  $handler->display->display_options['fields']['update_method']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['update_method']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['update_method']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['update_method']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['update_method']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['update_method']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['update_method']['alter']['html'] = 0;
  $handler->display->display_options['fields']['update_method']['hide_empty'] = 0;
  $handler->display->display_options['fields']['update_method']['empty_zero'] = 0;
  /* Field: VersionControl Repository: Log Fetching */
  $handler->display->display_options['fields']['manual_fetch']['id'] = 'manual_fetch';
  $handler->display->display_options['fields']['manual_fetch']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['manual_fetch']['field'] = 'manual_fetch';
  $handler->display->display_options['fields']['manual_fetch']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['manual_fetch']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['manual_fetch']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['alter']['html'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['hide_empty'] = 0;
  $handler->display->display_options['fields']['manual_fetch']['empty_zero'] = 0;
  /* Field: VersionControl Repository: Actions */
  $handler->display->display_options['fields']['actions']['id'] = 'actions';
  $handler->display->display_options['fields']['actions']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['fields']['actions']['field'] = 'actions';
  $handler->display->display_options['fields']['actions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['actions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['actions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['actions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['actions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['actions']['empty_zero'] = 0;
  /* Contextual filter: VersionControl Repository: Backend Type */
  $handler->display->display_options['arguments']['vcs']['id'] = 'vcs';
  $handler->display->display_options['arguments']['vcs']['table'] = 'versioncontrol_repositories';
  $handler->display->display_options['arguments']['vcs']['field'] = 'vcs';
  $handler->display->display_options['arguments']['vcs']['exception']['title_enable'] = 1;
  $handler->display->display_options['arguments']['vcs']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vcs']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vcs']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['vcs']['glossary'] = 0;
  $handler->display->display_options['arguments']['vcs']['limit'] = '0';
  $handler->display->display_options['arguments']['vcs']['transform_dash'] = 0;

  $views[$view->name] = $view;

  return $views;
}

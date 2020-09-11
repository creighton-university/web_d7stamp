<?php

/**
 * @file
 * Contains SearchApiHubService.
 */

/**
 * Indexes and searches items using the database.
 *
 * Database SELECT queries issued by this service class will be marked with tags
 * according to their context. The following are used:
 * - search_api_db_search: For all queries that are based on a search query.
 * - search_api_db_facets_base: For the query which creates a temporary results
 *   table to be used for facetting. (Is always used in conjunction with
 *   "search_api_db_search".)
 * - search_api_db_facet: For queries on the temporary results table for
 *   determining the items of a specific facet.
 * - search_api_db_facet_all: For queries to return all indexed values for a
 *   specific field. Is used when a facet has a "min_count" of 0.
 * - search_api_db_autocomplete: For queries which create a temporary results
 *   table to be used for computing autocomplete suggestions. (Is always used in
 *   conjunction with "search_api_db_search".)
 *
 * The following metadata will be present for those SELECT queries:
 * - search_api_query: The Search API query object. (Always present.)
 * - search_api_db_fields: Internal storage information for the indexed fields,
 *   as used by this service class. (Always present.)
 * - search_api_db_facet: The settings array of the facet currently being
 *   computed. (Present for "search_api_db_facet" and "search_api_db_facet_all"
 *   queries.)
 * - search_api_db_autocomplete: An array containing the parameters of the
 *   getAutocompleteSuggestions() call, except "query". (Present for
 *   "search_api_db_autocomplete" queries.)
 */
class SearchApiHubService extends SearchApiDbService {

  //Override the Database connection w/ HUB
  public function __construct(SearchApiServer $server) {
    parent::__construct($server);
    if (isset($this->options['database'])) {
      list($key, $target) = explode(':', $this->options['database'], 2);     
      $key = 'hub';
      $this->connection = Database::getConnection($target, $key);
    }
  }


}

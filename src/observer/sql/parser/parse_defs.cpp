void show_index_init(ShowIndex *show_index, const char *relation_name)
{
 show_index->relation_name = strdup(relation_name);
}
void show_index_destory(ShowIndex *show_index)
{
 free((char *)show_index->relation_name);
 show_index->relation_name = nullptr;
}

void query_reset(Query *query){
 case SCF_SHOW_INDEX: {
 show_index_destory(&query->sstr.show_index);
 } break;
}
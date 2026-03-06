// 函数名称: sub_5d3b50
// 虚拟地址: 0x5d3b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d3b50(void* arg1)
{
    // 第一条实际指令: int32_t* esi = *(*(arg1 + 0xa0) + 4)
    int32_t* esi = *(*(arg1 + 0xa0) + 4)
    (*(*esi + 0x5c))(esi)
    void var_14
    int32_t result = (*(*esi + 0x64))(esi, &var_14)
    int32_t i
    
    while (i u> 0)
        WaitForSingleObject(*(*(arg1 + 0xa0) + 0xc), 0xffffffff)
        result = (*(*esi + 0x64))(esi, &var_14)
    
    return result
}

// 函数名称: zip_fclose
// 虚拟地址: 0x5be9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_fclose(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x14)
    int32_t* eax = *(arg1 + 0x14)
    
    if (eax != 0)
        zip_source_free(eax)
    
    int32_t result_1 = *(arg1 + 4)
    int32_t result = 0
    
    if (result_1 != 0)
        result = result_1
    
    zip_error_fini(arg1 + 4)
    __free_base(arg1)
    return result
}

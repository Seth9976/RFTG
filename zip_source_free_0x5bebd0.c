// 函数名称: zip_source_free
// 虚拟地址: 0x5bebd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidzip_source_free(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t eax = arg1[0xc]
    
    if (eax != 0)
        arg1[0xc] = eax - 1
    
    if (arg1[0xc] u> 0)
        return 
    
    if (arg1[8] u> 0)
        arg1[8] = 1
        zip_source_close(arg1)
    
    if (arg1[9] == 1)
        zip_source_rollback_write(arg1)
    
    void* eax_1 = arg1[0xb]
    
    if (eax_1 != 0 && arg1[0xa].b == 0)
        sub_5c33a0(eax_1, arg1)
    
    sub_5c2f90(arg1, 0, 0, 0, 5)
    int32_t eax_2 = *arg1
    
    if (eax_2 != 0)
        zip_source_free(eax_2)
    
    __free_base(arg1)
}

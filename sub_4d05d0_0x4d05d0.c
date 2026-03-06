// 函数名称: sub_4d05d0
// 虚拟地址: 0x4d05d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d05d0(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t* var_20
    int32_t* var_20
    char eax
    void* edx
    int32_t edx_1
    eax, edx_1 = sub_4cd4e0(&var_20, edx)
    
    if (eax == 0)
        return eax
    
    int128_t* edi
    char eax_2 = sub_4cd480(arg1, edx_1, &var_20, edi)
    int32_t* eax_3 = var_20
    
    if (eax_3 != 0)
        zip_close(eax_3)
        void* var_1c
        zip_fclose(var_1c)
    
    int32_t* var_c
    sub_5a8c61(var_c)
    int32_t eax_5
    eax_5.b = eax_2
    return eax_5
}

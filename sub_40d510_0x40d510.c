// 函数名称: sub_40d510
// 虚拟地址: 0x40d510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_40d510(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_4075c0()
    int32_t var_14 = 0
    int32_t var_10 = 0
    char var_c = 0
    _strncpy(&var_14, arg1, 8)
    char var_c_1 = 0
    void* ecx_1 = *(data_27e7a40 + 0x28)
    
    if (ecx_1 != 0)
        int32_t** edx_1 = data_27e7bb8
        uint32_t eax_2 = zx.d(ecx_1.w)
        
        if (eax_2 u< edx_1[1])
            void* eax_4 = &(*edx_1)[eax_2 * 0x13]
            
            if (*(eax_4 + 0x48) == ecx_1)
                int32_t var_20
                int32_t* var_28_1 = &var_20
                void* var_2c_1 = eax_4 + 0x3c
                int32_t var_1c_1 = 9
                int32_t var_18_1 = 0xf426a
                var_20 = 0xfeedface
                void* ecx_2
                int32_t** edx_2
                ecx_2, edx_2 = sub_4c72b0(0xc, edx_1, ecx_1)
                int32_t* var_30_1 = &var_14
                void* var_34_1 = eax_4 + 0x3c
                sub_4c72b0(9, edx_2, ecx_2)
    
    sub_407670()
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

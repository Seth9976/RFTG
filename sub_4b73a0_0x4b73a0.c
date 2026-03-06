// 函数名称: sub_4b73a0
// 虚拟地址: 0x4b73a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_4b73a0(void** arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t result = 0
    int32_t var_1c = 0
    int32_t var_18 = 0
    void* ecx_4 = *arg1
    
    if (ecx_4 != 0)
        int32_t** edx_1 = data_27e7bb8
        result = zx.d(ecx_4.w)
        
        if (result u< edx_1[1])
            result = &(*edx_1)[result * 0x13]
            
            if (*(result + 0x48) == ecx_4)
                int32_t var_14
                int32_t* var_28_1 = &var_14
                int32_t var_2c_1 = result + 0x3c
                int32_t var_10_1 = 4
                int32_t var_c_1 = 0xf4252
                var_14 = 0xfeedface
                void* ecx_5
                int32_t** edx_2
                ecx_5, edx_2 = sub_4c72b0(0xc, edx_1, ecx_4)
                int32_t* var_30_1 = &var_1c
                int32_t var_34_1 = result + 0x3c
                result = sub_4c72b0(4, edx_2, ecx_5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

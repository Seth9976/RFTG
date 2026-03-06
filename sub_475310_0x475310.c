// 函数名称: sub_475310
// 虚拟地址: 0x475310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __fastcallsub_475310(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = data_27e7a40
    
    if (*(eax_2 + 0x317ad0) s>= 4)
        sub_4c57f0("Resume too many games for stats only")
        eax_2 = data_27e7a40
        *(eax_2 + 0x317ad0) = 0xffffffff
    
    void* edx = arg1 * 0x1f8 + eax_2
    __builtin_memcpy(*(eax_2 + 0x317ad0) * 0x1f8 + eax_2 + 0x2c9050, edx + 0xad8, 0x1f8)
    *(eax_2 + 0x317ad0) += 1
    int128_t* result = *(eax_2 + 0x28)
    
    if (result != 0)
        int32_t** edx_1 = data_27e7bb8
        uint32_t ecx_2 = zx.d(result.w)
        
        if (ecx_2 u< edx_1[1])
            void* ecx_4 = &(*edx_1)[ecx_2 * 0x13]
            
            if (*(ecx_4 + 0x48) == result)
                int32_t var_14
                int32_t* var_20_1 = &var_14
                void* var_24_1 = ecx_4 + 0x3c
                int32_t var_10_1 = 4
                int32_t var_c_1 = 0xf425e
                var_14 = 0xfeedface
                void* ecx_5
                int32_t** edx_2
                ecx_5, edx_2 = sub_4c72b0(0xc, edx_1, ecx_4)
                void* var_28_1 = edx + 0xcac
                void* var_2c_1 = ecx_4 + 0x3c
                result = sub_4c72b0(4, edx_2, ecx_5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

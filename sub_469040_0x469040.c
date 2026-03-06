// 函数名称: sub_469040
// 虚拟地址: 0x469040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __fastcallsub_469040(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x18)
    int32_t var_1c = 0
    int32_t* ebx = arg1
    arg1.b = *(data_27e7a60 + 0xc) == 1
    var_20.b = arg1.b
    ebx[1] = 0
    uint32_t result
    int32_t** edx
    result, edx = sub_468fe0()
    int32_t ebx_1 = *ebx
    
    if (ebx_1 != 0)
        void* ecx = data_27e7bb8
        result = zx.d(ebx_1.w)
        
        if (result u< *(ecx + 4))
            result = result * 0x4c + *ecx
            
            if (*(result + 0x48) == ebx_1)
                int32_t var_2c
                int32_t* var_38_1 = &var_2c
                int32_t var_3c_1 = result + 0x3c
                int32_t var_28_1 = 0x18
                int32_t var_24_1 = 0xf4246
                var_2c = 0xfeedface
                void* ecx_1
                int32_t** edx_1
                ecx_1, edx_1 = sub_4c72b0(0xc, edx, ecx)
                int32_t* var_40_1 = &var_20
                int32_t var_44_1 = result + 0x3c
                result = sub_4c72b0(0x18, edx_1, ecx_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

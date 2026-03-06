// 函数名称: sub_4749d0
// 虚拟地址: 0x4749d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4749d0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6942ce
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_2c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx
    int32_t var_30 = ecx
    sub_4fa8a0(data_307cccc, 0, fconvert.s(float.t(0)))
    
    if ((data_3165b48 & 1) == 0)
        data_3165b48.d |= 1
        int32_t var_c_1 = 0
        data_3165b44 = sub_4f5220(data_307c76c, "bg")
        int32_t var_c_2 = 0xffffffff
    
    int32_t ebx = data_3165b44
    void* eax_5 = sub_4fc3d0(&data_be1cb8, data_307cccc)
    int128_t* eax_6 = sub_4f6e90(ebx, eax_5, &data_83f3d3)
    void* eax_8
    int32_t ecx_3
    eax_8, ecx_3 = sub_4f7720(&data_84074c, ebx * 0x118 + *sub_4f4890(*(eax_5 + 4)), eax_6)
    int32_t var_30_2 = ecx_3
    int80_t result = sub_4fa8a0(*(eax_8 + 0x434), 0, fconvert.s(fconvert.t(1000f)))
    sub_40a160("title-screen")
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

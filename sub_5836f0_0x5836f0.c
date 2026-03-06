// 函数名称: sub_5836f0
// 虚拟地址: 0x5836f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_5836f0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_698cec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_316683c & 1) != 0
    data_27c048c = arg1
    
    if (not(cond:0))
        data_316683c.d |= 1
        int32_t var_8_1 = 0
        data_3166838 = sub_509140(0x1e, "sys/material_editor.ui")
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_5
    int80_t result
    result, eax_5 = sub_4f6f00(data_3166838)
    data_27c0490 = eax_5
    
    if ((data_316683c & 2) == 0)
        data_316683c.d |= 2
        int32_t var_8_3 = 1
        data_3166834 = sub_4f5220(data_3166838, "tblLayers")
        int32_t var_8_4 = 0xffffffff
    
    int32_t ebx = data_3166834
    int32_t eax_7
    char* ecx_2
    eax_7, ecx_2 = sub_4fc3d0(&data_be1cb8, data_27c0490)
    int128_t* eax_8 = sub_4f6e90(ebx, eax_7, &data_83f3d3)
    *(eax_8 + 0x13c) = *eax_8 + 1
    eax_8[0x14].d = sub_583690
    sub_536c00(ecx_2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

// 函数名称: sub_487440
// 虚拟地址: 0x487440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_487440(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    
    if (arg1 == data_307c1b8)
        arg3 = sub_4872a0(esi)
    else if (arg1 == data_307c1bc)
        void* eax
        eax, arg3 = sub_4fc3d0(&data_be1cb8, esi)
        *(eax + 0x2c) = sub_487410
    else if (arg1 == data_307c1a0)
        void* eax_1
        eax_1, arg3 = sub_4fc3d0(&data_be1cb8, esi)
        *(eax_1 + 0x2c) = sub_486ac0
    else if (arg1 == data_307c1a4)
        *(sub_4fc3d0(&data_be1cb8, esi) + 0x2c) = sub_487420
        sub_4075c0()
        char* var_8_2 = &data_307daf4
        arg3 = sub_415f90(esi)
        sub_407670()
    
    sub_4075c0()
    int32_t var_8_3 = 0
    int32_t* const var_c_2 = &data_84074c
    int32_t var_14 = arg3
    sub_4f8070(esi, fconvert.s(fconvert.t(data_8c4d34)), 0)
    return sub_407670() __tailcall
}

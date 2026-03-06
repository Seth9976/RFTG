// 函数名称: sub_4874f0
// 虚拟地址: 0x4874f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4874f0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    int32_t edi = data_315ff44
    void* ebx = arg3
    
    if (arg5 != 0)
        arg3 = sub_47e270(1)
    else if (arg1 == data_307c76c)
        arg3 = sub_47d670(ebx)
    else
        int80_t st0_1
        
        if (arg1 == data_307c16c)
            arg3, st0_1 = sub_482140(ebx)
        else if (arg1 == data_307ca58)
            arg3 = sub_486970()
        else if (arg1 == data_307c588)
            arg3 = sub_47ce70(ebx)
        else if (arg1 == data_307c4d8)
            arg3 = sub_4171c0(ebx)
        else if (arg1 == data_307c748)
            arg3 = sub_47ebc0(ebx)
        else if (arg1 == data_307c74c)
            arg3 = sub_47e610(ebx)
        else if (arg1 == data_307c69c)
            arg3 = sub_47e340(ebx)
        else if (arg1 == data_307c500)
            arg3 = sub_47e270(0)
        else if (arg1 == data_307c174)
            arg3 = sub_47f570(arg3)
        else if (arg1 == data_307c620)
            arg3 = sub_480860(ebx)
        else if (arg1 == data_307c624)
            arg3 = sub_4804b0(ebx)
        else if (arg1 == data_307c62c)
            arg3 = sub_47fd20(ebx)
        else if (arg1 == data_307c740)
            arg3 = sub_480d40(ebx)
        else if (arg1 == data_307c1c0)
            arg3 = sub_4814f0()
        else if (arg1 == data_307c4f8)
            arg3 = sub_485f00()
        else if (arg1 == data_307c794)
            arg3 = sub_4850f0(ebx, arg4)
        else if (arg1 == data_307c1a0)
            void* eax_1
            eax_1, arg3 = sub_4fc3d0(&data_be1cb8, ebx)
            *(eax_1 + 0x2c) = sub_486ac0
    
    sub_4075c0()
    int32_t var_18_13 = 0
    int32_t* const var_1c_2 = &data_84074c
    void* var_24 = arg3
    sub_4f8070(ebx, fconvert.s(fconvert.t(data_8c4d34)), edi)
    sub_407670()
}

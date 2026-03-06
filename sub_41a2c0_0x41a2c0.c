// 函数名称: sub_41a2c0
// 虚拟地址: 0x41a2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_41a2c0(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    sub_4075c0()
    int32_t entry_ebx
    
    if (sub_419400(&var_8) != 0 && arg4 == 0)
        for (int32_t i = 0; i s<= 0xb; )
            int32_t eax_1
            int32_t ecx
            eax_1, ecx = sub_419fe0(i)
            i += 1
            *(sub_50c830(eax_1, entry_ebx, sub_510b30(ecx, entry_ebx)) + 0x4c8) = 1
        
        sub_407670()
        return 0
    
    for (int32_t i_1 = 0; i_1 s<= 0xb; )
        int32_t eax_5 = sub_41a210(i_1)
        void* eax_6
        int32_t ecx_2
        eax_6, ecx_2 = sub_4fc3d0(&data_be1cb8, eax_5)
        unimplemented  {fldz }
        int32_t var_14_2 = ecx_2
        float var_14_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        *(eax_6 + 8) = 1
        int32_t ecx_3 = sub_4fa8a0(eax_5, 1, var_14_3)
        unimplemented  {call 0x4fa8a0}
        unimplemented  {fldz }
        int32_t var_14_4 = 0
        int32_t* const var_18_1 = &data_84074c
        int32_t var_20_1 = ecx_3
        float var_20_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int16_t top = top - 1
        sub_4f8070(eax_5, var_20_2, 0)
        int32_t eax_7
        int32_t ecx_4
        eax_7, ecx_4 = sub_419fe0(i_1)
        i_1 += 1
        *(sub_50c830(eax_7, entry_ebx, sub_510b30(ecx_4, entry_ebx)) + 0x4c8) = 1
    
    sub_407670()
    return 0
}

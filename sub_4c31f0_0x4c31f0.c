// 函数名称: sub_4c31f0
// 虚拟地址: 0x4c31f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c31f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69798a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_e4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx
    
    if ((data_31664c8 & 1) == 0)
        data_31664c8.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4
        eax_4, edx = sub_4f5220(data_307c740, "animDlg")
        data_31664c4 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    int32_t ecx
    int32_t var_e8 = ecx
    void* entry_ebx
    char result = sub_4faeb0(data_31664c4, edx, *(entry_ebx + 0x18), fconvert.s(float.t(0)))
    
    if (result == 0)
        sub_4c27e0(entry_ebx)
        void var_94
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_40a930(&var_94)
        float var_e8_4 = fconvert.s(float.t(1))
        void* eax_7 = *(entry_ebx + 0x18)
        void var_54
        __builtin_memcpy(&var_54, eax_6, 0x40)
        int32_t* ecx_2
        int32_t edx_1
        ecx_2, edx_1 = sub_4f9fe0(eax_7, &var_54)
        int80_t st0_2
        
        if (*(entry_ebx + 0x1c) == 0 && *(entry_ebx + 0x20) == 2)
            st0_2, ecx_2, edx_1 = sub_4bfcb0(entry_ebx)
        
        if ((data_31664c8 & 2) == 0)
            data_31664c8.d |= 2
            int32_t var_8_3 = 1
            ecx_2 = data_307c744
            int32_t eax_8
            eax_8, edx_1 = sub_4f5220(ecx_2, "dlgSlideAnim")
            data_31664c0 = eax_8
            int32_t var_8_4 = 0xffffffff
        
        unimplemented  {fldz }
        int32_t* var_e8_6 = ecx_2
        float var_e8_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        result = sub_4faeb0(data_31664c0, edx_1, *(entry_ebx + 0x34), var_e8_7)
        
        if (result == 0)
            if ((data_31664c8 & 4) == 0)
                data_31664c8.d |= 4
                int32_t var_8_5 = 2
                data_31664bc = sub_4f5220(data_307c744, "FillTile")
                int32_t var_8_6 = 0xffffffff
            
            int128_t* eax_12 =
                sub_4f6e90(data_31664bc, sub_4fc3d0(&data_be1cb8, *(entry_ebx + 0x34)), &data_83f3d3)
            *(eax_12 + 0x13c) = *eax_12 + 1
            eax_12[0x14].d = sub_4c2e80
            int32_t eax_13 = *(entry_ebx + 0x190)
            int32_t var_14_1 = eax_13
            
            if (eax_13 != 0)
                unimplemented  {fild st0, dword [ebx+0x40]}
                unimplemented  {fidiv st0, dword [ebp-0x10]}
            else
                unimplemented  {fldz }
            
            data_27e7aa8 = fconvert.s(unimplemented  {fstp dword [0x27e7aa8], st0})
            unimplemented  {fstp dword [0x27e7aa8], st0}
            void var_d4
            int32_t eax_14 = sub_40a930(&var_d4)
            unimplemented  {call 0x40a930}
            unimplemented  {fld1 }
            float var_e8_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            __builtin_memcpy(&var_54, eax_14, 0x40)
            result = sub_4f9fe0(*(entry_ebx + 0x34), &var_54)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

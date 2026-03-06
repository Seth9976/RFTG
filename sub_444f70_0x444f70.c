// 函数名称: sub_444f70
// 虚拟地址: 0x444f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_444f70()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697c9e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4dad50()
    
    if ((data_3166548 & 1) == 0)
        data_3166548.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_3
        int80_t st0_1
        st0_1, eax_3 = sub_4f6f00(data_307c7a4)
        data_3166544 = eax_3
        int32_t var_8_2 = 0xffffffff
    
    unimplemented  {fldz }
    float var_34 = fconvert.s(unimplemented  {fst dword [ebp-0x30], st0})
    float var_30 = fconvert.s(unimplemented  {fstp dword [ebp-0x2c], st0})
    unimplemented  {fstp dword [ebp-0x2c], st0}
    unimplemented  {fld st0, dword [0x8a5494]}
    float var_2c = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
    unimplemented  {fstp dword [ebp-0x28], st0}
    float var_20 = var_30
    unimplemented  {fld st0, dword [0x8a5490]}
    float var_28 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
    unimplemented  {fstp dword [ebp-0x24], st0}
    float var_1c = var_2c
    float var_24 = var_34
    float var_18 = var_28
    int32_t eax_6 = sub_4fb1d0(&var_24, &var_24)
    unimplemented  {call 0x4fb1d0}
    float var_74
    __builtin_memcpy(&var_74, eax_6, 0x40)
    void* eax_7 = sub_4f4890(data_307c7a4)
    int32_t var_34_1 = *(eax_7 + 8)
    int32_t var_2c_1 = *(eax_7 + 0x10)
    unimplemented  {fld st0, dword [ebp-0x28]}
    int32_t var_30_1 = *(eax_7 + 0xc)
    unimplemented  {fsub st0, dword [ebp-0x30]}
    int32_t var_28_1 = *(eax_7 + 0x14)
    float var_1c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
    unimplemented  {fstp dword [ebp-0x18], st0}
    unimplemented  {fld st0, dword [ebp-0x24]}
    unimplemented  {fsub st0, dword [ebp-0x2c]}
    float var_18_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
    unimplemented  {fstp dword [ebp-0x14], st0}
    unimplemented  {fld st0, dword [ebp-0x18]}
    unimplemented  {fchs }
    float var_2c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
    unimplemented  {fstp dword [ebp-0x28], st0}
    unimplemented  {fld st0, dword [ebp-0x14]}
    unimplemented  {fchs }
    float var_28_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
    unimplemented  {fstp dword [ebp-0x24], st0}
    unimplemented  {fld st0, dword [ebp-0x28]}
    unimplemented  {fld st0, qword [0x8a5368]}
    unimplemented  {fmul st1, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
    unimplemented  {fstp dword [ebp-0x18], st0}
    unimplemented  {fmul st0, dword [ebp-0x24]}
    float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
    unimplemented  {fstp dword [ebp-0x14], st0}
    unimplemented  {fld st0, dword [ebp-0x18]}
    unimplemented  {fld st0, dword [ebp-0x64]}
    unimplemented  {fld st0, st0}
    unimplemented  {fmulp st2, st0}
    unimplemented  {fmulp st2, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    float var_2c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
    unimplemented  {fstp dword [ebp-0x28], st0}
    var_74 = var_2c_3
    unimplemented  {fmul st0, dword [ebp-0x14]}
    float var_28_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
    unimplemented  {fstp dword [ebp-0x24], st0}
    unimplemented  {fld1 }
    float var_70 = var_28_3
    float var_c8_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    sub_4f9fe0(data_3166544, &var_74)
    void* eax_10 = data_27e7fe4
    __builtin_memcpy(eax_10 + 0x9c, 0x83faf8, 0x40)
    *(eax_10 + 0xdc) = 0
    int32_t result = sub_4e2080()
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_4ef8a0
// 虚拟地址: 0x4ef8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ef8a0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int16_t top = 0xffff
    long double x87_r7 = float.t(0)
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    void* entry_ebx
    long double temp1 = fconvert.t(*(entry_ebx + 0x10))
    x87_r7 - temp1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    void* edi = arg2
    void* var_60 = edi
    int32_t result
    result.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    int16_t x87control
    
    if (not(p))
        float var_44_1 = fconvert.s(fconvert.t(*(arg1 + 0x14)))
        float var_48_1 = fconvert.s(fconvert.t(*(entry_ebx + 0x10)))
        result, arg2, x87control = sub_68b79a()
        float var_3c_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_48_1))))
        long double x87_r6_3 = float.t(0)
        long double temp2_1 = fconvert.t(var_44_1)
        x87_r6_3 - temp2_1
        result.w = (x87_r6_3 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, temp2_1) ? 1 : 0) << 0xa | (x87_r6_3 == temp2_1 ? 1 : 0) << 0xe
            | 0x3000
        long double x87_r5_2
        
        if ((result:1.b & 0x41) != 0)
            x87_r5_2 = fconvert.t(var_3c_2)
        else
            x87_r5_2 = fconvert.t(var_3c_2) + fconvert.t(var_48_1)
        
        *(arg1 + 0x14) = fconvert.s(fconvert.t(fconvert.s(x87_r5_2)))
        top = 0xfffe
    
    unimplemented  {fld st0, dword [ebx+0x14]}
    unimplemented  {fld st0, st1}
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_2 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_2 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    int16_t top_3 = top
    result.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_3 & 7) << 0xb
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fld st0, dword [esi+0x18]}
        float var_3c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebx+0x14]}
        float var_44_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
        unimplemented  {fstp dword [ebp-0x40], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fld st0, dword [ebp-0x40]}
        result, arg2, x87control = sub_68b79a()
        float var_48_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
        unimplemented  {fstp dword [ebp-0x44], st0}
        unimplemented  {fld st0, dword [ebp-0x44]}
        float var_48_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
        unimplemented  {fstp dword [ebp-0x44], st0}
        unimplemented  {fldz }
        long double temp3_1 = fconvert.t(var_3c_4)
        unimplemented  {fcom st0, dword [ebp-0x38]} f- temp3_1
        bool c0_3 = unimplemented  {fcom st0, dword [ebp-0x38]} f< temp3_1
        bool c2_3 = is_unordered.t(unimplemented  {fcom st0, dword [ebp-0x38]}, temp3_1)
        bool c3_3 = unimplemented  {fcom st0, dword [ebp-0x38]} f== temp3_1
        result.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
            | ((top_3 - 1) & 7) << 0xb
        int16_t top_15
        
        if ((result:1.b & 0x41) != 0)
            top_15 = top_3 - 2
            unimplemented  {fld st0, dword [ebp-0x44]}
        else
            top_15 = top_3 - 2
            unimplemented  {fld st0, dword [ebp-0x44]}
            unimplemented  {fadd dword [ebp-0x40]}
        
        float var_3c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        *(arg1 + 0x18) = fconvert.s(unimplemented  {fstp dword [esi+0x18], st0})
        unimplemented  {fstp dword [esi+0x18], st0}
        top_3 = top_15 + 1
    
    unimplemented  {fld st0, dword [ebx+0x18]}
    unimplemented  {fld st0, st1}
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0_4 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2_4 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3_4 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    int16_t top_20 = top_3
    result.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fld st0, dword [esi+0x1c]}
        float var_3c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebx+0x18]}
        float var_44_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
        unimplemented  {fstp dword [ebp-0x40], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fld st0, dword [ebp-0x40]}
        result, arg2, x87control = sub_68b79a()
        float var_48_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
        unimplemented  {fstp dword [ebp-0x44], st0}
        unimplemented  {fld st0, dword [ebp-0x44]}
        float var_48_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
        unimplemented  {fstp dword [ebp-0x44], st0}
        unimplemented  {fldz }
        long double temp5_1 = fconvert.t(var_3c_6)
        unimplemented  {fcom st0, dword [ebp-0x38]} f- temp5_1
        bool c0_5 = unimplemented  {fcom st0, dword [ebp-0x38]} f< temp5_1
        bool c2_5 = is_unordered.t(unimplemented  {fcom st0, dword [ebp-0x38]}, temp5_1)
        bool c3_5 = unimplemented  {fcom st0, dword [ebp-0x38]} f== temp5_1
        result.w = (c0_5 ? 1 : 0) << 8 | (c2_5 ? 1 : 0) << 0xa | (c3_5 ? 1 : 0) << 0xe
            | ((top_20 - 1) & 7) << 0xb
        int16_t top_32
        
        if ((result:1.b & 0x41) != 0)
            top_32 = top_20 - 2
            unimplemented  {fld st0, dword [ebp-0x44]}
        else
            top_32 = top_20 - 2
            unimplemented  {fld st0, dword [ebp-0x44]}
            unimplemented  {fadd dword [ebp-0x40]}
        
        float var_3c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        *(arg1 + 0x1c) = fconvert.s(unimplemented  {fstp dword [esi+0x1c], st0})
        unimplemented  {fstp dword [esi+0x1c], st0}
        top_20 = top_32 + 1
    
    long double temp4 = fconvert.t(*(entry_ebx + 0x20))
    unimplemented  {fcom st0, dword [ebx+0x20]} f- temp4
    bool c0_6 = unimplemented  {fcom st0, dword [ebx+0x20]} f< temp4
    bool c2_6 = is_unordered.t(unimplemented  {fcom st0, dword [ebx+0x20]}, temp4)
    bool c3_6 = unimplemented  {fcom st0, dword [ebx+0x20]} f== temp4
    result.w = (c0_6 ? 1 : 0) << 8 | (c2_6 ? 1 : 0) << 0xa | (c3_6 ? 1 : 0) << 0xe | (top_20 & 7) << 0xb
    int16_t top_35 = top_20 - 1
    unimplemented  {fld st0, qword [0x8a5368]}
    bool p_3 = unimplemented  {test ah, 0x5}
    double var_84
    float var_38[0x4]
    long double st0
    
    if (not(p_3))
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        unimplemented  {fld st0, dword [ebx+0x20]}
        float var_48_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
        unimplemented  {fstp dword [ebp-0x44], st0}
        unimplemented  {fld st0, dword [ebx+0x1c]}
        __builtin_memcpy(&var_38, 0x27e8090, 0x1c)
        unimplemented  {fmul st0, st1}
        float var_40_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fmul st0, dword [ebp-0x44]}
        float var_44_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
        unimplemented  {fstp dword [ebp-0x40], st0}
        float var_74
        sub_405900(&var_74, arg2, &var_38)
        float var_1c_1 = var_74
        unimplemented  {fld st0, dword [ebp-0x18]}
        int32_t var_70
        int32_t var_18_1 = var_70
        unimplemented  {fld st0, dword [ebp-0x40]}
        unimplemented  {fld st0, st0}
        int32_t var_6c
        int32_t var_14_1 = var_6c
        unimplemented  {fmulp st2, st0}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_5c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x58], st0})
        unimplemented  {fstp dword [ebp-0x58], st0}
        unimplemented  {fld st0, dword [ebp-0x14]}
        unimplemented  {fmul st0, st1}
        float var_58_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
        unimplemented  {fstp dword [ebp-0x54], st0}
        unimplemented  {fmul st0, dword [ebp-0x10]}
        float var_54 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
        unimplemented  {fstp dword [ebp-0x50], st0}
        unimplemented  {fld st0, dword [ebp-0x58]}
        unimplemented  {fadd dword [ebp-0x24]}
        var_74 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
        unimplemented  {fstp dword [ebp-0x70], st0}
        unimplemented  {fld st0, dword [ebp-0x20]}
        unimplemented  {fadd dword [ebp-0x54]}
        float var_70_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
        unimplemented  {fstp dword [ebp-0x6c], st0}
        unimplemented  {fld st0, dword [ebp-0x1c]}
        unimplemented  {fadd dword [ebp-0x50]}
        float var_6c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
        unimplemented  {fstp dword [ebp-0x68], st0}
        unimplemented  {fld st0, dword [esi+0x14]}
        unimplemented  {fsub st0, dword [ebp-0x70]}
        float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        unimplemented  {fld st0, dword [esi+0x18]}
        float var_5c_2 = var_1c_2
        unimplemented  {fsub st0, dword [ebp-0x6c]}
        float var_18_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        unimplemented  {fld st0, dword [esi+0x1c]}
        unimplemented  {fsub st0, dword [ebp-0x68]}
        float var_14_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
        unimplemented  {fld st0, dword [ebp-0x14]}
        var_54 = var_14_2
        unimplemented  {fdiv st0, dword [ebp-0x44]}
        float var_3c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        var_84 = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        int32_t mxcsr
        sub_686950(mxcsr, x87control, var_84)
        unimplemented  {call 0x686950}
        float var_3c_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        float var_3c_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fld st0, qword [0x8a5768]}
        unimplemented  {fmul st0, st1}
        unimplemented  {fadd dword [ebp-0x18]}
        float var_5c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x58], st0})
        unimplemented  {fstp dword [ebp-0x58], st0}
        unimplemented  {fmul st0, qword [0x8a5760]}
        unimplemented  {fadd dword [ebp-0x50]}
        var_54 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
        unimplemented  {fstp dword [ebp-0x50], st0}
        unimplemented  {fld st0, dword [ebp-0x58]}
        unimplemented  {fld st0, dword [ebp-0x44]}
        sub_68b79a()
        float var_3c_11 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        float var_3c_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fldz }
        long double temp6_1 = fconvert.t(var_5c_3)
        unimplemented  {fcomp st0, dword [ebp-0x58]} f- temp6_1
        bool c0_7 = unimplemented  {fcomp st0, dword [ebp-0x58]} f< temp6_1
        bool c2_7 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x58]}, temp6_1)
        bool c3_7 = unimplemented  {fcomp st0, dword [ebp-0x58]} f== temp6_1
        unimplemented  {fcomp st0, dword [ebp-0x58]}
        int16_t top_81
        
        if ((((c0_7 ? 1 : 0) << 8 | (c2_7 ? 1 : 0) << 0xa | (c3_7 ? 1 : 0) << 0xe
                | ((top_35 + 1) & 7) << 0xb):1.b & 0x41) != 0)
            top_81 = top_35
            unimplemented  {fld st0, dword [ebp-0x38]}
        else
            top_81 = top_35
            unimplemented  {fld st0, dword [ebp-0x38]}
            unimplemented  {fadd dword [ebp-0x44]}
        
        float var_3c_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fsub st0, dword [ebp-0x40]}
        float var_1c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        unimplemented  {fld st0, dword [ebp-0x54]}
        unimplemented  {fld st0, dword [ebp-0x44]}
        sub_68b79a()
        float var_3c_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        float var_3c_15 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fldz }
        long double temp7_1 = fconvert.t(var_18_2)
        unimplemented  {fcomp st0, dword [ebp-0x54]} f- temp7_1
        bool c0_8 = unimplemented  {fcomp st0, dword [ebp-0x54]} f< temp7_1
        bool c2_8 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x54]}, temp7_1)
        bool c3_8 = unimplemented  {fcomp st0, dword [ebp-0x54]} f== temp7_1
        unimplemented  {fcomp st0, dword [ebp-0x54]}
        int16_t top_92
        
        if ((((c0_8 ? 1 : 0) << 8 | (c2_8 ? 1 : 0) << 0xa | (c3_8 ? 1 : 0) << 0xe | (top_81 & 7) << 0xb)
                :1.b & 0x41) != 0)
            top_92 = top_81 - 1
            unimplemented  {fld st0, dword [ebp-0x38]}
        else
            top_92 = top_81 - 1
            unimplemented  {fld st0, dword [ebp-0x38]}
            unimplemented  {fadd dword [ebp-0x44]}
        
        float var_3c_16 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fsub st0, dword [ebp-0x40]}
        float var_18_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        unimplemented  {fld st0, dword [ebp-0x50]}
        unimplemented  {fld st0, dword [ebp-0x44]}
        sub_68b79a()
        float var_3c_17 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        float var_3c_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fldz }
        long double temp8_1 = fconvert.t(var_54)
        unimplemented  {fcomp st0, dword [ebp-0x50]} f- temp8_1
        bool c0_9 = unimplemented  {fcomp st0, dword [ebp-0x50]} f< temp8_1
        bool c2_9 = is_unordered.t(unimplemented  {fcomp st0, dword [ebp-0x50]}, temp8_1)
        bool c3_9 = unimplemented  {fcomp st0, dword [ebp-0x50]} f== temp8_1
        unimplemented  {fcomp st0, dword [ebp-0x50]}
        int16_t top_103
        
        if ((((c0_9 ? 1 : 0) << 8 | (c2_9 ? 1 : 0) << 0xa | (c3_9 ? 1 : 0) << 0xe | (top_92 & 7) << 0xb)
                :1.b & 0x41) != 0)
            top_103 = top_92 - 1
            unimplemented  {fld st0, dword [ebp-0x38]}
        else
            top_103 = top_92 - 1
            unimplemented  {fld st0, dword [ebp-0x38]}
            unimplemented  {fadd dword [ebp-0x44]}
        
        float var_3c_19 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fsub st0, dword [ebp-0x40]}
        float var_14_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
        unimplemented  {fld st0, dword [ebp-0x70]}
        unimplemented  {fld st0, dword [ebp-0x18]}
        unimplemented  {fld st0, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_5c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x58], st0})
        unimplemented  {fstp dword [ebp-0x58], st0}
        unimplemented  {fld st0, dword [ebp-0x6c]}
        *(arg1 + 0x14) = var_5c_4
        unimplemented  {fld st0, dword [ebp-0x14]}
        var_84:4.d = var_5c_4
        unimplemented  {fld st0, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_58_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
        unimplemented  {fstp dword [ebp-0x54], st0}
        unimplemented  {fld st0, dword [ebp-0x68]}
        *(arg1 + 0x18) = var_58_3
        unimplemented  {fld st0, dword [ebp-0x10]}
        unimplemented  {fld st0, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        var_54 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
        unimplemented  {fstp dword [ebp-0x50], st0}
        unimplemented  {fld st0, st1}
        *(arg1 + 0x1c) = var_54
        unimplemented  {fmulp st2, st0}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fld st0, st2}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fmul st0, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        float var_3c_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x38]}
        var_84:4.d = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_8
        int16_t x87control_1
        st0, eax_8, x87control_1 = sub_413560()
        unimplemented  {call 0x413560}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, dword [ebp-0x40]}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fdiv st0, dword [ebp-0x3c]}
        float var_40_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fldz }
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_10 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_10 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_10 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        eax_8.w = (c0_10 ? 1 : 0) << 8 | (c2_10 ? 1 : 0) << 0xa | (c3_10 ? 1 : 0) << 0xe
            | ((top_103 - 1) & 7) << 0xb
        bool p_4 = unimplemented  {test ah, 0x41}
        int16_t top_145
        
        if (p_4)
            unimplemented  {fld1 }
            unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
            bool c0_11 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
            bool c2_11 =
                is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1})
            bool c3_11 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
            unimplemented  {fcomp st0, st1}
            eax_8.w = (c0_11 ? 1 : 0) << 8 | (c2_11 ? 1 : 0) << 0xa | (c3_11 ? 1 : 0) << 0xe
                | ((top_103 - 1) & 7) << 0xb
            bool p_5 = unimplemented  {test ah, 0x41}
            
            if (p_5)
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                unimplemented  {fldz }
                unimplemented  {fld1 }
                unimplemented  {fsub st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                top_145 = top_103
            else
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                top_145 = top_103
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            int16_t top_135
            top_145 = top_135
            unimplemented  {fld1 }
        
        float var_44_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
        unimplemented  {fstp dword [ebp-0x40], st0}
        uint32_t ecx_4 = zx.d(*(var_60 + 3))
        unimplemented  {fld st0, dword [ebp-0x40]}
        uint32_t var_40_5 = ecx_4
        var_84:4.d = ecx_4
        unimplemented  {fild st0, dword [ebp-0x3c]}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        float var_40_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        var_84:4.d = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        result = sub_4e3930(x87control_1)
        unimplemented  {fld st0, qword [0x8a5368]}
        *(var_60 + 3) = result.b
        top_35 = top_145 - 1
        unimplemented  {fldz }
        edi = var_60
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
    
    unimplemented  {fld st0, dword [ebx+0x44]}
    unimplemented  {fld st0, dword [ebx+0x48]}
    unimplemented  {fcompp } f- unimplemented  {fcompp }
    bool c0_12 = unimplemented  {fcompp } f< unimplemented  {fcompp }
    bool c2_12 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
    bool c3_12 = unimplemented  {fcompp } f== unimplemented  {fcompp }
    unimplemented  {fcompp }
    unimplemented  {fcompp }
    result.w =
        (c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe | (top_35 & 7) << 0xb
    int16_t top_190
    
    if ((result:1.b & 0x41) != 0)
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        top_190 = top_35 + 2
    else
        unimplemented  {fld st0, dword [ebx+0x44]}
        float var_40_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [esi+0x1c]}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, dword [ebx+0x48]}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fdiv st0, dword [ebp-0x3c]}
        float var_40_10 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st2} f- unimplemented  {fcom st0, st2}
        bool c0_13 = unimplemented  {fcom st0, st2} f< unimplemented  {fcom st0, st2}
        bool c2_13 = is_unordered.t(unimplemented  {fcom st0, st2}, unimplemented  {fcom st0, st2})
        bool c3_13 = unimplemented  {fcom st0, st2} f== unimplemented  {fcom st0, st2}
        result.w = (c0_13 ? 1 : 0) << 8 | (c2_13 ? 1 : 0) << 0xa | (c3_13 ? 1 : 0) << 0xe
            | ((top_35 - 1) & 7) << 0xb
        bool p_6 = unimplemented  {test ah, 0x41}
        int16_t top_176
        
        if (p_6)
            unimplemented  {fld1 }
            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
            bool c0_14 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
            bool c2_14 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
            bool c3_14 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
            result.w = (c0_14 ? 1 : 0) << 8 | (c2_14 ? 1 : 0) << 0xa | (c3_14 ? 1 : 0) << 0xe
                | ((top_35 - 2) & 7) << 0xb
            bool p_7 = unimplemented  {test ah, 0x41}
            int16_t top_178
            
            if (p_7)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fld1 }
                unimplemented  {fldz }
                unimplemented  {fsub st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                top_178 = top_35 - 1
            else
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                top_178 = top_35 - 1
            
            float var_44_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
            unimplemented  {fstp dword [ebp-0x40], st0}
            top_176 = top_178 + 1
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_176 = top_35
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            float var_44_6 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
        
        unimplemented  {fld st0, dword [ebp-0x40]}
        uint32_t var_40_11 = zx.d(*(edi + 3))
        unimplemented  {fild st0, dword [ebp-0x3c]}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        float var_40_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_15 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_15 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_15 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        result.w = (c0_15 ? 1 : 0) << 8 | (c2_15 ? 1 : 0) << 0xa | (c3_15 ? 1 : 0) << 0xe
            | ((top_176 - 1) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_8 = unimplemented  {test ah, 0x5}
        
        if (p_8)
            unimplemented  {faddp st1, st0}
            unimplemented  {faddp st1, st0}
            top_190 = top_176 + 2
            *(edi + 3) = sub_685f40(st0).b
        else
            unimplemented  {fsubrp st1, st0}
            unimplemented  {fsubrp st1, st0}
            top_190 = top_176 + 2
            *(edi + 3) = sub_685f40(st0).b
    
    unimplemented  {fld st0, dword [ebx+0x4c]}
    unimplemented  {fld st0, dword [ebx+0x50]}
    unimplemented  {fcompp } f- unimplemented  {fcompp }
    bool c0_16 = unimplemented  {fcompp } f< unimplemented  {fcompp }
    bool c2_16 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
    bool c3_16 = unimplemented  {fcompp } f== unimplemented  {fcompp }
    unimplemented  {fcompp }
    unimplemented  {fcompp }
    result.w =
        (c0_16 ? 1 : 0) << 8 | (c2_16 ? 1 : 0) << 0xa | (c3_16 ? 1 : 0) << 0xe | (top_190 & 7) << 0xb
    
    if ((result:1.b & 0x41) == 0)
        unimplemented  {fld st0, dword [eax+0x14]}
        int32_t ecx_5 = __builtin_memcpy(&var_38, 0x27e8090, 0x1c)
        unimplemented  {fsub st0, dword [ebp-0x24]}
        float var_1c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        unimplemented  {fld st0, dword [eax+0x18]}
        unimplemented  {fsub st0, dword [ebp-0x20]}
        float var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        unimplemented  {fld st0, dword [eax+0x1c]}
        unimplemented  {fsub st0, dword [ebp-0x1c]}
        var_84:4.d = ecx_5
        float var_14_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
        unimplemented  {fld st0, dword [ebx+0x4c]}
        float var_3c_21 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x18]}
        unimplemented  {fld st0, dword [ebp-0x14]}
        unimplemented  {fld st0, dword [ebp-0x10]}
        unimplemented  {fld st0, st1}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fld st0, st2}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fmul st0, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        float var_40_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        var_84:4.d = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_9
        long double st0_1
        st0_1, eax_9 = sub_413560()
        unimplemented  {call 0x413560}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, dword [ebx+0x50]}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_15 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fdiv st0, dword [ebp-0x3c]}
        float var_40_16 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fldz }
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_17 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_17 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_17 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int16_t top_211
        eax_9.w = (c0_17 ? 1 : 0) << 8 | (c2_17 ? 1 : 0) << 0xa | (c3_17 ? 1 : 0) << 0xe
            | (top_211 & 7) << 0xb
        bool p_9 = unimplemented  {test ah, 0x41}
        float var_44_9
        
        if (p_9)
            unimplemented  {fld1 }
            unimplemented  {fcomp st0, st1} f- unimplemented  {fcomp st0, st1}
            bool c0_18 = unimplemented  {fcomp st0, st1} f< unimplemented  {fcomp st0, st1}
            bool c2_18 =
                is_unordered.t(unimplemented  {fcomp st0, st1}, unimplemented  {fcomp st0, st1})
            bool c3_18 = unimplemented  {fcomp st0, st1} f== unimplemented  {fcomp st0, st1}
            unimplemented  {fcomp st0, st1}
            eax_9.w = (c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa | (c3_18 ? 1 : 0) << 0xe
                | (top_211 & 7) << 0xb
            bool p_10 = unimplemented  {test ah, 0x41}
            
            if (p_10)
                unimplemented  {fldz }
                unimplemented  {fld1 }
                unimplemented  {fsub st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                var_44_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                unimplemented  {fstp dword [ebp-0x40], st0}
            else
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                float var_44_8 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            unimplemented  {fld1 }
            var_44_9 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
            unimplemented  {fstp dword [ebp-0x40], st0}
        unimplemented  {fld st0, dword [ebp-0x40]}
        uint32_t var_40_17 = zx.d(*(var_60 + 3))
        unimplemented  {fild st0, dword [ebp-0x3c]}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        float var_40_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_19 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_19 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_19 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        uint32_t eax_10
        int16_t top_232
        eax_10.w = (c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa | (c3_19 ? 1 : 0) << 0xe
            | ((top_232 - 1) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_11 = unimplemented  {test ah, 0x5}
        
        if (p_11)
            unimplemented  {fadd qword [0x8a5368]}
        else
            unimplemented  {fsub st0, qword [0x8a5368]}
        
        *(var_60 + 3) = sub_685f40(st0_1).b
    
    unimplemented  {fld st0, dword [ebx+0x54]}
    unimplemented  {fld st0, dword [ebx+0x58]}
    unimplemented  {fcompp } f- unimplemented  {fcompp }
    bool c0_20 = unimplemented  {fcompp } f< unimplemented  {fcompp }
    bool c2_20 = is_unordered.t(unimplemented  {fcompp }, unimplemented  {fcompp })
    bool c3_20 = unimplemented  {fcompp } f== unimplemented  {fcompp }
    unimplemented  {fcompp }
    unimplemented  {fcompp }
    int16_t top_195
    result.w =
        (c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa | (c3_20 ? 1 : 0) << 0xe | (top_195 & 7) << 0xb
    
    if ((result:1.b & 0x41) == 0)
        unimplemented  {fld st0, dword [eax+0x14]}
        int32_t ecx_6 = __builtin_memcpy(&var_38, 0x27e8090, 0x1c)
        unimplemented  {fsub st0, dword [ebp-0x24]}
        float var_1c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
        unimplemented  {fstp dword [ebp-0x18], st0}
        unimplemented  {fld st0, dword [eax+0x18]}
        unimplemented  {fsub st0, dword [ebp-0x20]}
        float var_18_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
        unimplemented  {fstp dword [ebp-0x14], st0}
        unimplemented  {fld st0, dword [eax+0x1c]}
        unimplemented  {fsub st0, dword [ebp-0x1c]}
        var_84:4.d = ecx_6
        float var_14_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
        unimplemented  {fstp dword [ebp-0x10], st0}
        unimplemented  {fld st0, dword [ebx+0x54]}
        float var_3c_22 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
        unimplemented  {fstp dword [ebp-0x38], st0}
        unimplemented  {fld st0, dword [ebp-0x18]}
        unimplemented  {fld st0, dword [ebp-0x14]}
        unimplemented  {fld st0, dword [ebp-0x10]}
        unimplemented  {fld st0, st1}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fmulp st2, st0}
        unimplemented  {fld st0, st2}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fmulp st3, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        unimplemented  {faddp st2, st0}
        unimplemented  {faddp st2, st0}
        unimplemented  {fmul st0, st0}
        unimplemented  {faddp st1, st0}
        unimplemented  {faddp st1, st0}
        float var_40_19 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        var_84:4.d = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        int32_t eax_11
        long double st0_2
        st0_2, eax_11 = sub_413560()
        unimplemented  {call 0x413560}
        unimplemented  {fld st0, dword [ebp-0x38]}
        unimplemented  {fld st0, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fsubp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_20 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fld st0, dword [ebx+0x58]}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fsubrp st2, st0}
        unimplemented  {fxch st0, st1}
        unimplemented  {fxch st0, st1}
        float var_40_21 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fdiv st0, dword [ebp-0x3c]}
        float var_40_22 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fldz }
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_21 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_21 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_21 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        int16_t top_257
        eax_11.w = (c0_21 ? 1 : 0) << 8 | (c2_21 ? 1 : 0) << 0xa | (c3_21 ? 1 : 0) << 0xe
            | ((top_257 + 1) & 7) << 0xb
        bool p_12 = unimplemented  {test ah, 0x41}
        int16_t top_277
        int16_t top_273
        
        if (p_12)
            unimplemented  {fld1 }
            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
            bool c0_22 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
            bool c2_22 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
            bool c3_22 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
            eax_11.w = (c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
                | ((top_273 - 2) & 7) << 0xb
            bool p_13 = unimplemented  {test ah, 0x41}
            int16_t top_279
            
            if (p_13)
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fld1 }
                unimplemented  {fldz }
                unimplemented  {fsub st1, st0}
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                unimplemented  {fmulp st2, st0}
                unimplemented  {fmulp st2, st0}
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                top_279 = top_273 - 1
            else
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                top_279 = top_273 - 1
            
            float var_4c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
            unimplemented  {fstp dword [ebp-0x48], st0}
            top_277 = top_279 + 1
        else
            unimplemented  {fstp st0, st0}
            unimplemented  {fstp st0, st0}
            top_277 = top_273
            float var_4c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x48], st0})
        unimplemented  {fld st0, dword [ebp-0x48]}
        uint32_t var_40_23 = zx.d(*(var_60 + 3))
        unimplemented  {fild st0, dword [ebp-0x3c]}
        unimplemented  {fmulp st1, st0}
        unimplemented  {fmulp st1, st0}
        float var_40_24 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
        unimplemented  {fstp dword [ebp-0x3c], st0}
        unimplemented  {fld st0, dword [ebp-0x3c]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_23 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_23 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_23 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        eax_11.w = (c0_23 ? 1 : 0) << 8 | (c2_23 ? 1 : 0) << 0xa | (c3_23 ? 1 : 0) << 0xe
            | ((top_277 - 1) & 7) << 0xb
        unimplemented  {fstp st1, st0}
        unimplemented  {fstp st1, st0}
        bool p_14 = unimplemented  {test ah, 0x5}
        
        if (p_14)
            unimplemented  {fadd qword [0x8a5368]}
        else
            unimplemented  {fsub st0, qword [0x8a5368]}
        
        result = sub_685f40(st0_2)
        *(var_60 + 3) = result.b
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_53a1d0
// 虚拟地址: 0x53a1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_53a1d0(HDC arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692778
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    HDC hdc = arg1
    HDC hdc_1 = hdc
    BOOL result = sub_537110()
    int32_t* result_1 = result
    
    if (result != 0)
        int32_t var_8c
        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_8c)
        ScreenToClient(data_3078830, &var_8c)
        POINT point_4
        ScreenToClient(data_3078830, &point_4)
        SelectObject(hdc, GetStockObject(BLACK_PEN))
        SelectObject(hdc, GetStockObject(DC_BRUSH))
        SetDCBrushColor(hdc, 0xdcdcdc)
        int32_t top
        Rectangle(hdc, var_8c, top, point_4.x, point_4.y)
        int32_t var_12c
        int32_t* eax_10 = sub_5374d0(&var_12c)
        int32_t ecx_1 = *eax_10
        int32_t edx_3 = eax_10[2]
        int32_t top_1 = eax_10[1]
        float var_40_1 = fconvert.s(fconvert.t(data_3078840) - fconvert.t(data_3078844))
        int32_t bottom = eax_10[3]
        int32_t esi_3 = bottom - top_1
        SelectObject(hdc, GetStockObject(DC_PEN))
        SelectObject(hdc, GetStockObject(DC_BRUSH))
        SetDCBrushColor(hdc, 0xf0f0f0)
        SetDCPenColor(hdc, 0xc0c0c0)
        Rectangle(hdc, ecx_1, top_1, edx_3, bottom)
        SetBkMode(hdc, 1)
        SelectObject(hdc, GetStockObject(ANSI_VAR_FONT))
        int32_t x_2 = var_8c + 4
        int32_t i_2 = 0
        int32_t x = x_2
        int32_t var_5c_1 = esi_3 * 5 - 5
        char* lpString_1
        int32_t i
        
        do
            int32_t x_3 = x_2
            sub_537c80(&lpString_1, 
                fconvert.s(fconvert.t(fconvert.s(float.t(i_2) * fconvert.t(var_40_1) / fconvert.t(5.0)
                    + fconvert.t(data_3078844)))))
            int32_t c = 0
            int32_t var_8_1 = 0
            char* lpString = lpString_1
            int32_t y_2 = var_5c_1 s/ 5 + top_1
            
            if (lpString != 0 && *lpString != 0)
                c = *(sub_4c4060(&lpString_1) + 8)
                lpString = lpString_1
            
            if (lpString == 0)
                lpString = &data_83f3d3
            
            TextOutA(hdc, x, y_2 - 6, lpString, c)
            MoveToEx(hdc, ecx_1, y_2, nullptr)
            LineTo(hdc, edx_3, y_2)
            int32_t var_8_2 = 0xffffffff
            char* lpString_2 = lpString_1
            
            if (lpString_2 != 0 && *lpString_2 != 0)
                void* eax_23 = sub_4c4060(&lpString_1)
                int32_t temp1_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_9 = *(eax_23 + 0xc) + 0x10
                    sub_4f4430(eax_23, sub_4f4380(esi_9), esi_9)
                    hdc = hdc_1
            
            x_2 = 1 - esi_3
            var_5c_1 += x_2
            i = i_2 + 1
            i_2 = i
        while (i s< 6)
        SetDCPenColor(hdc, 0)
        SetDCBrushColor(hdc, 0x808080)
        int32_t* result_3 = result_1
        int32_t* result_4 = result_3[1]
        result = 0
        BOOL result_2 = 0
        
        if (result_4 s>= 0)
            do
                int32_t var_58_1 = 0xa
                int32_t edx_12
                
                if (result != 0 && result != result_4)
                    edx_12 = *((result << 4) + *result_3 + 0xc)
                
                if (result == 0 || result == result_4 || edx_12 == 1 || edx_12 == 0)
                    var_58_1 = 2
                
                int32_t var_5c_2 = 1
                
                if (var_58_1 s> 1)
                    int32_t var_40_2 = var_58_1 - 1
                    unimplemented  {fild st0, dword [ebp-0x3c]}
                    float var_6c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                    unimplemented  {fstp dword [ebp-0x68], st0}
                    bool cond:1_1
                    
                    do
                        unimplemented  {fld st0, dword [ebp-0x68]}
                        int32_t esi_10
                        
                        if (result != 0)
                            if (result != result_3[1])
                                unimplemented  {fld st0, dword [eax+ecx-0x10]}
                                esi_10 = *((result << 4) + *result_3 + 0xc)
                                float var_64_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x60], st0})
                                unimplemented  {fstp dword [ebp-0x60], st0}
                                unimplemented  {fld st0, dword [eax-0xc]}
                                float var_60_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                                unimplemented  {fstp dword [ebp-0x5c], st0}
                                unimplemented  {fld st0, dword [eax]}
                                lpString_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                                unimplemented  {fstp dword [ebp-0x48], st0}
                                unimplemented  {fld st0, dword [eax+0x4]}
                                float var_70_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                                unimplemented  {fstp dword [ebp-0x6c], st0}
                                unimplemented  {fld st0, dword [eax-0x8]}
                                goto label_53a552
                            
                            unimplemented  {fld st0, dword [edx+eax*8-0x10]}
                            float var_64_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x60], st0})
                            unimplemented  {fstp dword [ebp-0x60], st0}
                            esi_10 = 1
                            unimplemented  {fld st0, dword [eax+0x4]}
                            float var_60_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                            unimplemented  {fstp dword [ebp-0x5c], st0}
                            unimplemented  {fld st0, dword [eax]}
                            lpString_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                            unimplemented  {fstp dword [ebp-0x48], st0}
                            unimplemented  {fld st0, dword [eax+0x4]}
                            float var_70_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                            unimplemented  {fstp dword [ebp-0x6c], st0}
                            unimplemented  {fld st0, dword [eax+0x8]}
                            float var_54_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
                            unimplemented  {fstp dword [ebp-0x50], st0}
                            unimplemented  {fld1 }
                        else
                            unimplemented  {fld st0, dword [eax]}
                            esi_10 = 1
                            float var_64_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x60], st0})
                            unimplemented  {fstp dword [ebp-0x60], st0}
                            unimplemented  {fld st0, dword [eax+0x4]}
                            float var_60_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                            unimplemented  {fstp dword [ebp-0x5c], st0}
                            unimplemented  {fld st0, dword [eax]}
                            lpString_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                            unimplemented  {fstp dword [ebp-0x48], st0}
                            unimplemented  {fld st0, dword [eax+0x4]}
                            float var_70_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                            unimplemented  {fstp dword [ebp-0x6c], st0}
                            unimplemented  {fldz }
                        label_53a552:
                            float var_54_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
                            unimplemented  {fstp dword [ebp-0x50], st0}
                            unimplemented  {fld st0, dword [eax+0x8]}
                        
                        float var_68_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                        unimplemented  {fstp dword [ebp-0x64], st0}
                        int32_t var_40_3 = var_5c_2 - 1
                        unimplemented  {fild st0, dword [ebp-0x3c]}
                        unimplemented  {fdiv st0, st1}
                        float var_40_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                        unimplemented  {fstp dword [ebp-0x3c], st0}
                        unimplemented  {fidivr st0, dword [ebp-0x58]}
                        float var_50 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
                        unimplemented  {fstp dword [ebp-0x4c], st0}
                        unimplemented  {fld st0, dword [ebp-0x64]}
                        unimplemented  {fld st0, dword [ebp-0x50]}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fsubp st2, st0}
                        unimplemented  {fsubp st2, st0}
                        unimplemented  {fld st0, dword [ebp-0x3c]}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fmul st0, st3}
                        unimplemented  {fadd st0, st2}
                        float var_54_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x50], st0})
                        unimplemented  {fstp dword [ebp-0x50], st0}
                        unimplemented  {fld st0, dword [ebp-0x4c]}
                        unimplemented  {fmulp st3, st0}
                        unimplemented  {fmulp st3, st0}
                        unimplemented  {fxch st0, st2}
                        unimplemented  {fxch st0, st2}
                        unimplemented  {faddp st1, st0}
                        unimplemented  {faddp st1, st0}
                        float var_68_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x64], st0})
                        unimplemented  {fstp dword [ebp-0x64], st0}
                        unimplemented  {fld st0, dword [ebp-0x48]}
                        float var_140_15 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                        unimplemented  {fstp dword [esp+0x8], st0}
                        unimplemented  {fld st0, dword [ebp-0x60]}
                        float var_144_21 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        float var_148_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4066a0(esi_10, var_148_6)
                        float var_48_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                        unimplemented  {fstp dword [ebp-0x44], st0}
                        unimplemented  {fld st0, dword [ebp-0x6c]}
                        float var_140_16 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                        unimplemented  {fstp dword [esp+0x8], st0}
                        unimplemented  {fld st0, dword [ebp-0x5c]}
                        float var_144_22 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        unimplemented  {fld st0, dword [ebp-0x3c]}
                        float var_148_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4066a0(esi_10, var_148_7)
                        float var_44_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                        unimplemented  {fstp dword [ebp-0x40], st0}
                        unimplemented  {fld st0, dword [ebp-0x48]}
                        float var_140_17 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                        unimplemented  {fstp dword [esp+0x8], st0}
                        unimplemented  {fld st0, dword [ebp-0x60]}
                        float var_144_23 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        unimplemented  {fld st0, dword [ebp-0x4c]}
                        float var_148_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4066a0(esi_10, var_148_8)
                        float var_64_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x60], st0})
                        unimplemented  {fstp dword [ebp-0x60], st0}
                        unimplemented  {fld st0, dword [ebp-0x6c]}
                        float var_140_18 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                        unimplemented  {fstp dword [esp+0x8], st0}
                        unimplemented  {fld st0, dword [ebp-0x5c]}
                        float var_144_24 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                        unimplemented  {fstp dword [esp+0x4], st0}
                        unimplemented  {fld st0, dword [ebp-0x4c]}
                        float var_148_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        sub_4066a0(esi_10, var_148_9)
                        float var_70_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x6c], st0})
                        unimplemented  {fstp dword [ebp-0x6c], st0}
                        unimplemented  {fld st0, dword [0x3078844]}
                        float var_40_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                        unimplemented  {fstp dword [ebp-0x3c], st0}
                        unimplemented  {fld st0, dword [0x3078840]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        float var_60_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x5c], st0})
                        unimplemented  {fstp dword [ebp-0x5c], st0}
                        int32_t var_fc
                        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_fc)
                        ScreenToClient(data_3078830, &var_fc)
                        POINT point_2
                        ScreenToClient(data_3078830, &point_2)
                        int32_t y_1 = point_2.y
                        int32_t var_50_1 = point_2.x - 8 - (var_fc + 0x16)
                        unimplemented  {fild st0, dword [ebp-0x4c]}
                        var_12c = var_fc + 0x16
                        unimplemented  {fmul st0, dword [ebp-0x50]}
                        int32_t eax_38 = sub_685f40(eax_2)
                        unimplemented  {fld st0, dword [ebp-0x44]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        int32_t x_1 = eax_38 + var_12c
                        unimplemented  {fdiv st0, dword [ebp-0x5c]}
                        unimplemented  {fld1 }
                        unimplemented  {fsubrp st1, st0}
                        unimplemented  {fsubrp st1, st0}
                        float var_48_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                        unimplemented  {fstp dword [ebp-0x44], st0}
                        unimplemented  {fld st0, dword [ebp-0x44]}
                        int32_t var_f8
                        int32_t var_48_3 = y_1 - 0x14 - (var_f8 + 0xa)
                        unimplemented  {fimul st0, dword [ebp-0x44]}
                        int32_t eax_39 = sub_685f40()
                        unimplemented  {fld st0, dword [0x3078844]}
                        float var_40_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                        unimplemented  {fstp dword [ebp-0x3c], st0}
                        unimplemented  {fld st0, dword [0x3078840]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        float var_50_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
                        unimplemented  {fstp dword [ebp-0x4c], st0}
                        int32_t var_10c
                        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_10c)
                        ScreenToClient(data_3078830, &var_10c)
                        POINT point_1
                        ScreenToClient(data_3078830, &point_1)
                        int32_t ecx_9 = var_10c + 0x16
                        int32_t var_48_4 = point_1.x - 8 - ecx_9
                        unimplemented  {fild st0, dword [ebp-0x44]}
                        int32_t edx_24 = point_1.y - 0x14
                        unimplemented  {fmul st0, dword [ebp-0x50]}
                        int32_t eax_46 = sub_685f40()
                        unimplemented  {fld st0, dword [ebp-0x40]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        unimplemented  {fdiv st0, dword [ebp-0x4c]}
                        unimplemented  {fld1 }
                        unimplemented  {fsubrp st1, st0}
                        unimplemented  {fsubrp st1, st0}
                        float var_44_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                        unimplemented  {fstp dword [ebp-0x40], st0}
                        unimplemented  {fld st0, dword [ebp-0x40]}
                        int32_t var_108
                        int32_t var_44_3 = edx_24 - (var_108 + 0xa)
                        unimplemented  {fimul st0, dword [ebp-0x40]}
                        int32_t eax_50 = sub_685f40()
                        unimplemented  {fld st0, dword [0x3078844]}
                        float var_40_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                        unimplemented  {fstp dword [ebp-0x3c], st0}
                        unimplemented  {fld st0, dword [0x3078840]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        float var_48_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                        unimplemented  {fstp dword [ebp-0x44], st0}
                        int32_t var_11c
                        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_11c)
                        ScreenToClient(data_3078830, &var_11c)
                        POINT point
                        ScreenToClient(data_3078830, &point)
                        int32_t ecx_11 = var_11c + 0x16
                        int32_t var_44_4 = point.x - 8 - ecx_11
                        unimplemented  {fild st0, dword [ebp-0x40]}
                        int32_t edx_29 = point.y - 0x14
                        unimplemented  {fmul st0, dword [ebp-0x64]}
                        int32_t eax_58 = sub_685f40()
                        unimplemented  {fld st0, dword [ebp-0x60]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        unimplemented  {fdiv st0, dword [ebp-0x44]}
                        unimplemented  {fld1 }
                        unimplemented  {fsubrp st1, st0}
                        unimplemented  {fsubrp st1, st0}
                        float var_44_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                        unimplemented  {fstp dword [ebp-0x40], st0}
                        unimplemented  {fld st0, dword [ebp-0x40]}
                        int32_t var_118
                        int32_t var_44_6 = edx_29 - (var_118 + 0xa)
                        unimplemented  {fimul st0, dword [ebp-0x40]}
                        int32_t eax_62 = sub_685f40()
                        unimplemented  {fld st0, dword [0x3078844]}
                        float var_40_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                        unimplemented  {fstp dword [ebp-0x3c], st0}
                        unimplemented  {fld st0, dword [0x3078840]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        float var_48_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
                        unimplemented  {fstp dword [ebp-0x44], st0}
                        int32_t var_cc
                        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_cc)
                        ScreenToClient(data_3078830, &var_cc)
                        POINT point_3
                        ScreenToClient(data_3078830, &point_3)
                        int32_t ecx_13 = var_cc + 0x16
                        int32_t var_44_7 = point_3.x - 8 - ecx_13
                        unimplemented  {fild st0, dword [ebp-0x40]}
                        int32_t edx_34 = point_3.y - 0x14
                        unimplemented  {fmul st0, dword [ebp-0x64]}
                        int32_t eax_70 = sub_685f40()
                        unimplemented  {fld st0, dword [ebp-0x6c]}
                        unimplemented  {fsub st0, dword [ebp-0x3c]}
                        point_4.x = eax_70 + ecx_13
                        unimplemented  {fdiv st0, dword [ebp-0x44]}
                        unimplemented  {fld1 }
                        unimplemented  {fsubrp st1, st0}
                        unimplemented  {fsubrp st1, st0}
                        float var_44_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                        unimplemented  {fstp dword [ebp-0x40], st0}
                        unimplemented  {fld st0, dword [ebp-0x40]}
                        int32_t var_c8
                        int32_t var_44_9 = edx_34 - (var_c8 + 0xa)
                        unimplemented  {fimul st0, dword [ebp-0x40]}
                        point_4.y = sub_685f40() + var_c8 + 0xa
                        MoveToEx(hdc, x_1, eax_39 + var_f8 + 0xa, nullptr)
                        LineTo(hdc, eax_58 + ecx_11, eax_62 + var_118 + 0xa)
                        MoveToEx(hdc, eax_46 + ecx_9, eax_50 + var_108 + 0xa, nullptr)
                        LineTo(hdc, point_4.x, point_4.y)
                        result_3 = result_1
                        cond:1_1 = var_5c_2 + 1 s< var_58_1
                        var_5c_2 += 1
                        result = result_2
                    while (cond:1_1)
                
                result_4 = result_3[1]
                result += 1
                result_2 = result
            while (result s<= result_4)
        
        int32_t i_1 = 0
        
        if (result_3[1] s> 0)
            do
                int32_t var_140_33 = 1
                int32_t eax_82
                int32_t edx_37
                eax_82, edx_37 = sub_537540(i_1, result_4.b)
                point_4.y = edx_37
                COLORREF color
                
                if (data_3078838 == i_1 && data_307883c != 0)
                    color = 0x6464ff
                else if (data_3078834 != i_1)
                    color = 0x808080
                else
                    color = 0xc8
                
                SetDCBrushColor(hdc, color)
                int32_t y = point_4.y
                POINT apt
                apt.y = y - 4
                int32_t var_28_1 = y - 4
                int32_t var_20_1 = point_4.y + 4
                int32_t var_18_1 = point_4.y + 4
                int32_t var_30_1 = y - 8
                apt.x = eax_82 - 4
                int32_t var_34_1 = eax_82
                int32_t var_2c_1 = eax_82 + 4
                int32_t var_24_1 = eax_82 + 4
                int32_t var_1c_1 = eax_82 - 4
                int32_t var_140_34 = 0
                int32_t eax_85
                int32_t edx_41
                eax_85, edx_41 = sub_537540(i_1, Polygon(hdc, &apt, 5))
                COLORREF color_1
                
                if (data_3078838 == i_1 && data_307883c == 0)
                    color_1 = 0x6464ff
                else if (data_3078834 != i_1)
                    color_1 = 0x808080
                else
                    color_1 = 0xc8
                
                SetDCBrushColor(hdc, color_1)
                result = Rectangle(hdc, eax_85 - 4, edx_41 - 4, eax_85 + 5, edx_41 + 5)
                result_4 = result_1
                i_1 += 1
            while (i_1 s< result_4[1])
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

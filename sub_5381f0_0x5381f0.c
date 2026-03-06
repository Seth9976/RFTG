// 函数名称: sub_5381f0
// 虚拟地址: 0x5381f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5381f0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6927b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_44 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_537110()
    
    if (eax_3 != 0)
        int32_t ebx_1 = data_3078834
        
        if (ebx_1 s>= 0 && ebx_1 s< eax_3[1])
            int32_t ebx_2 = ebx_1 << 4
            float* ebx_3 = ebx_2 + *eax_3
            
            if (ebx_2 != neg.d(*eax_3))
                void* eax_22
                int32_t ecx_7
                eax_22, ecx_7 = sub_537110()
                int32_t var_48 = ecx_7
                char* lpString_7
                sub_537c80(&lpString_7, fconvert.s(fconvert.t(*ebx_3)))
                int32_t var_c_1 = 0
                char* lpString_6
                sub_537c80(&lpString_6, 
                    fconvert.s(fconvert.t(fconvert.s(fconvert.t(ebx_3[1]) - fconvert.t(*ebx_3)))))
                var_c_1.b = 1
                char* lpString_5
                sub_537c80(&lpString_5, fconvert.s(fconvert.t(ebx_3[2])))
                var_c_1.b = 2
                char* lpString_4
                sub_537c80(&lpString_4, fconvert.s(fconvert.t(*(eax_22 + 0xc))))
                HWND hDlg_1 = data_3078830
                data_3078848 = 1
                ShowWindow(GetDlgItem(hDlg_1, 0x89), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x8a), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x8b), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x95), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x81), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x82), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x83), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x96), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x90), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x91), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x97), SW_SHOW)
                ShowWindow(GetDlgItem(data_3078830, 0x98), SW_SHOW)
                char* const lpString = lpString_7
                
                if (lpString == 0)
                    lpString = &data_83f3d3
                
                SetDlgItemTextA(data_3078830, 0x81, lpString)
                char* const lpString_1 = lpString_6
                
                if (lpString_1 == 0)
                    lpString_1 = &data_83f3d3
                
                SetDlgItemTextA(data_3078830, 0x82, lpString_1)
                char* lpString_2 = lpString_5
                
                if (lpString_2 == 0)
                    lpString_2 = &data_83f3d3
                
                SetDlgItemTextA(data_3078830, 0x83, lpString_2)
                char* const lpString_3 = lpString_4
                
                if (lpString_3 == 0)
                    lpString_3 = &data_83f3d3
                
                SetDlgItemTextA(data_3078830, 0x96, lpString_3)
                HWND hDlg_2 = data_3078830
                data_3078848 = 0
                HWND hWnd = GetDlgItem(hDlg_2, 0x91)
                void* const ecx_13 = &data_83f9a8
                char* const lParam
                
                while (true)
                    if (*ecx_13 == ebx_3[3])
                        lParam = *(ecx_13 + 4)
                        break
                    
                    ecx_13 += 8
                    
                    if (*(ecx_13 + 4) == 0)
                        lParam = &data_83f3d3
                        break
                
                SendMessageA(hWnd, 0x14d, 0xffffffff, lParam)
                HWND hWnd_1 = GetDlgItem(data_3078830, 0x90)
                void* const ecx_14 = &data_83f978
                char* const lParam_1
                
                while (true)
                    if (*ecx_14 == *(eax_22 + 8))
                        lParam_1 = *(ecx_14 + 4)
                        break
                    
                    ecx_14 += 8
                    
                    if (*(ecx_14 + 4) == 0)
                        lParam_1 = &data_83f3d3
                        break
                
                SendMessageA(hWnd_1, 0x14d, 0xffffffff, lParam_1)
                CheckDlgButton(data_3078830, 0x97, zx.d(*(eax_22 + 0x10)))
                CheckDlgButton(data_3078830, 0x98, zx.d(*(eax_22 + 0x11)))
                char* lpString_8 = lpString_4
                
                if (lpString_8 != 0 && *lpString_8 != 0)
                    void* eax_43 = sub_4c4060(&lpString_4)
                    int32_t temp2_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_5 = *(eax_43 + 0xc) + 0x10
                        sub_4f4430(eax_43, sub_4f4380(esi_5), esi_5)
                
                var_c_1.b = 1
                char* lpString_9 = lpString_5
                
                if (lpString_9 != 0 && *lpString_9 != 0)
                    void* eax_47 = sub_4c4060(&lpString_5)
                    int32_t temp3_1 = *(eax_47 + 4)
                    *(eax_47 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_7 = *(eax_47 + 0xc) + 0x10
                        sub_4f4430(eax_47, sub_4f4380(esi_7), esi_7)
                
                var_c_1.b = 0
                char* lpString_10 = lpString_6
                
                if (lpString_10 != 0 && *lpString_10 != 0)
                    void* eax_51 = sub_4c4060(&lpString_6)
                    int32_t temp4_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        int32_t esi_9 = *(eax_51 + 0xc) + 0x10
                        sub_4f4430(eax_51, sub_4f4380(esi_9), esi_9)
                
                int32_t var_c_2 = 0xffffffff
                char* lpString_11 = lpString_7
                
                if (lpString_11 != 0 && *lpString_11 != 0)
                    lpString_11 = sub_4c4060(&lpString_7)
                    int32_t temp5_1 = *(lpString_11 + 4)
                    *(lpString_11 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        int32_t esi_11 = *(lpString_11 + 0xc) + 0x10
                        lpString_11 = sub_4f4430(lpString_11, sub_4f4380(esi_11), esi_11)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return lpString_11
    
    HWND hDlg = data_3078830
    data_3078848 = 1
    ShowWindow(GetDlgItem(hDlg, 0x89), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x8a), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x8b), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x95), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x81), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x82), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x83), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x96), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x90), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x91), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x97), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x98), SW_HIDE)
    SetDlgItemTextA(data_3078830, 0x81, &data_83f3d3)
    SetDlgItemTextA(data_3078830, 0x82, &data_83f3d3)
    SetDlgItemTextA(data_3078830, 0x83, &data_83f3d3)
    BOOL eax_21 = SetDlgItemTextA(data_3078830, 0x96, &data_83f3d3)
    data_3078848 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21
}

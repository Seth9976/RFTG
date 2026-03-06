// 函数名称: sub_53b340
// 虚拟地址: 0x53b340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53b340()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* result = __security_cookie ^ &__saved_ebp
    int32_t* result_1 = result
    
    if (data_3078848 == 0)
        result = sub_537110()
        
        if (result != 0)
            int32_t edi_1 = data_3078834
            
            if (edi_1 s>= 0 && edi_1 s< result[1])
                int32_t edi_2 = edi_1 << 4
                float* edi_3 = edi_2 + *result
                
                if (edi_2 != neg.d(*result))
                    void* eax_1 = sub_537110()
                    void string_3
                    GetDlgItemTextA(data_3078830, 0x81, &string_3, 0x50)
                    void string
                    GetDlgItemTextA(data_3078830, 0x82, &string, 0x50)
                    void string_2
                    GetDlgItemTextA(data_3078830, 0x83, &string_2, 0x50)
                    void string_1
                    GetDlgItemTextA(data_3078830, 0x96, &string_1, 0x50)
                    float* var_168_1 = edi_3
                    sub_5a957c(&string_3, &data_882e30)
                    void* var_168_2 = &edi_3[2]
                    sub_5a957c(&string_2, &data_882e30)
                    void* var_168_3 = eax_1 + 0xc
                    sub_5a957c(&string_1, &data_882e30)
                    float var_150 = fconvert.s(float.t(0))
                    float* var_168_4 = &var_150
                    
                    if (sub_5a957c(&string, &data_882e30) == 1)
                        edi_3[1] = fconvert.s(fconvert.t(*edi_3) + fconvert.t(var_150))
                    
                    sub_53abd0()
                    sub_5373e0(&data_3078844)
                    HWND hWnd = GetDlgItem(data_3078830, 0x91)
                    LRESULT wParam = SendMessageA(hWnd, 0x147, 0, 0)
                    
                    if (wParam == 0xffffffff)
                        sub_4c5870("curveIndex != CB_ERR", &data_83f3d3, "Windows\EditorWindow.cpp", 
                            0x7e7, "EditorNodeDataChanged")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edi_3[3] = SendMessageA(hWnd, 0x150, wParam, 0)
                    HWND hWnd_1 = GetDlgItem(data_3078830, 0x90)
                    LRESULT wParam_1 = SendMessageA(hWnd_1, 0x147, 0, 0)
                    
                    if (wParam_1 == 0xffffffff)
                        sub_4c5870("distributionIndex != CB_ERR", &data_83f3d3, 
                            "Windows\EditorWindow.cpp", 0x7ec, "EditorNodeDataChanged")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(eax_1 + 8) = SendMessageA(hWnd_1, 0x150, wParam_1, 0)
                    *(eax_1 + 0x10) = IsDlgButtonChecked(data_3078830, 0x97) != 0
                    *(eax_1 + 0x11) = IsDlgButtonChecked(data_3078830, 0x98) != 0
                    result = sub_536c00(InvalidateRect(data_3078830, nullptr, 0))
    
    sub_5a6aba(result_1 ^ &__saved_ebp)
    return result
}

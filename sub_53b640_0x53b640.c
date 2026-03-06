// 函数名称: sub_53b640
// 虚拟地址: 0x53b640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_53b640(HWND arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd = GetDlgItem(arg1, 0x85)
    LRESULT eax_5 = SendMessageA(GetDlgItem(data_3078830, 0x7b), 0x188, 0, 0)
    int32_t var_40c
    
    if (eax_5 != 0xffffffff)
        var_40c = eax_5 + 1
    else
        var_40c = 0
    
    int32_t* eax_7 = sub_536db0()
    int32_t lParam[0x100]
    SendMessageA(hWnd, 0x191, 0x100, &lParam)
    LRESULT eax_8
    int32_t* edx
    eax_8, edx = SendMessageA(hWnd, 0x190, 0, 0)
    char* ecx = nullptr
    char* var_410 = nullptr
    
    if (eax_8 s> 0)
        do
            int32_t edi_1 = lParam[ecx]
            
            if (edi_1 u> 0x79)
                sub_4c5870("paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                    &data_83f3d3, "Windows\EditorWindow.cpp", 0x823, "EditorPickDialogOk")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_9 = *((edi_1 << 3) + &data_8c3608)
            
            if (eax_9 != 0x70)
                int32_t esi_1 = *eax_7
                int32_t ecx_1 = 0
                
                if (esi_1 s> 0)
                    edx = eax_7[1]
                    
                    do
                        if (*edx == eax_9)
                            goto label_53b78a
                        
                        ecx_1 += 1
                        edx = &edx[2]
                    while (ecx_1 s< esi_1)
                
                if (*(sub_531280(eax_9, edx, &data_8c35ec) + 0x10) != 8)
                    int32_t var_428_2 = 0
                    int32_t var_42c_3 = *((edi_1 << 3) + &data_8c3608)
                else
                    edx = *((edi_1 << 3) + &data_8c3608)
                    char* const var_428_1 = &data_83f3d3
                    int32_t* var_42c_2 = edx
                
                edx = sub_530b60(eax_7, edx, &data_8c35ec, &data_8c35ec)
                int32_t esi_3 = *eax_7 - 1
                
                if (var_40c != esi_3)
                    int32_t* eax_15 = sub_4fff30(data_315f704, 4)
                    edx = sub_505390(eax_15, esi_3, eax_7, eax_15, var_40c)
                
                var_40c += 1
            
        label_53b78a:
            ecx = &var_410[1]
            var_410 = ecx
        while (ecx s< eax_8)
    
    void* eax_16 = data_3079208
    
    if (eax_16 != 0)
        int32_t eax_17 = *(eax_16 + 4)
        
        if (eax_17 == 0x19)
            int32_t __saved_ebx_1 = var_40c - 1
            ecx = sub_538a80(0xffffffff)
        else if (eax_17 == 0x1b)
            ecx = sub_539d30(0xffffffff)
    
    data_3078834 = 0
    sub_536c00(ecx)
    BOOL result = EndDialog(arg1, 1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_602590
// 虚拟地址: 0x602590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_602590(HIMC arg1, HWND arg2)
{
    // 第一条实际指令: int32_t var_10 = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    
    if (arg1 != 0)
        return 
    
    arg1->__offset(0x78).w = 0
    
    if (data_bf8000 == 0)
        data_bf8000 = 0x94
        GetVersionExA(&data_bf8000)
    
    HIMC edi_1 = sub_601720(arg1, 0)
    
    if (edi_1 == 0)
        return 
    
    HIMC param1 = ImmGetContext(arg2)
    
    if (param1 == 0)
        return 
    
    int32_t eax = arg1
    
    if (eax == 0)
        void* eax_4 = arg1(param1)
        void* eax_11
        int16_t* eax_13
        int32_t ecx_4
        
        if (edi_1 u> 0x4040404)
            if (edi_1 == 0x5010404 || edi_1 == 0x5020404 || edi_1 == 0x5030804)
                void* eax_16 = *(arg1(*(eax_4 + 0x124)) + 4)
                
                if (eax_16 != 0)
                    eax_11 = *(eax_16 + 0x18)
                label_602732:
                    
                    if (eax_11 != 0)
                        ecx_4 = *(eax_11 + 0x60)
                        eax_13 = eax_11 + 0x40
                        goto label_60273c
        else
            void* eax_8
            
            if (edi_1 == 0x4040404)
            label_6026ef:
                eax_8 = *(arg1(*(eax_4 + 0x124)) + 0x18)
            label_6026f2:
                
                if (eax_8 != 0)
                    ecx_4 = *(eax_8 + 0x9c)
                    eax_13 = eax_8 + 0x38
                label_60273c:
                    
                    if (eax_13 != 0)
                        int32_t ecx_6 = ecx_4 + 1
                        
                        if (ecx_6 u>= 0x10)
                            ecx_6 = 0x10
                        
                        sub_5cd1f0(&arg1[0x1e], eax_13, ecx_6)
            else if (edi_1 u> 0x4020804)
                if (edi_1 == 0x4030404)
                    goto label_6026ef
            else if (edi_1 != 0x4020804)
                if (edi_1 == 0x4010804)
                    bool c_1 = sub_601720(arg1, 1) u< 2
                    eax_8 = *(arg1(*(eax_4 + 0x124)) + (sbb.d(edi_1, edi_1, c_1) << 2) + 0x20)
                    goto label_6026f2
                
                if (edi_1 == 0x4020404)
                    goto label_6026ef
            else if (data_bf8010 == 2)
                eax_11 = *(arg1(*(eax_4 + 0x124)) + 0x20)
                goto label_602732
        arg1(*(eax_4 + 0x124))
        arg1(param1)
    else
        int32_t eax_1 = eax(param1, 0, 0, &var_10, &var_c, &var_8)
        int16_t var_34[0x10]
        
        if (eax_1 != 0)
            if (eax_1 u> 0x10)
                eax_1 = 0x10
            
            eax_1 = arg1(param1, eax_1, &var_34, &var_10, &var_c, &var_8)
        
        sub_5cd1f0(&arg1[0x1e], &var_34, eax_1)
    
    ImmReleaseContext(arg2, param1)
    sub_601c60(arg1)
}

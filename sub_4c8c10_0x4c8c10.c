// 函数名称: sub_4c8c10
// 虚拟地址: 0x4c8c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c8c10()
{
    // 第一条实际指令: int32_t** __saved_ebx_1 = data_27e7bb8
    int32_t** __saved_ebx_1 = data_27e7bb8
    
    if (__saved_ebx_1 == 0)
        return 
    
    void* esi_1 = nullptr
    int32_t edx_1
    
    while (true)
        void* edi_1
        
        if (esi_1 != 0)
            edi_1 = esi_1 + 0xc
        else
            edi_1 = __saved_ebx_1[7]
        
        edx_1 = __saved_ebx_1[7]
        int32_t eax_3 = edx_1 + __saved_ebx_1[8] * 0xc
        
        if (edi_1 u>= eax_3)
            break
        
        while ((*(edi_1 + 8) & 0xffff0000) == 0)
            edi_1 += 0xc
            
            if (edi_1 u>= eax_3)
                goto label_4c8c50
        
        esi_1 = edi_1
        sub_4c7120(edi_1)
        __saved_ebx_1 = data_27e7bb8
    
    label_4c8c50:
    int32_t* esi_2 = nullptr
    void* eax_6
    
    while (true)
        if (esi_2 != 0)
            esi_2 = &esi_2[0x13]
        else
            esi_2 = *__saved_ebx_1
        
        eax_6 = &(*__saved_ebx_1)[__saved_ebx_1[1] * 0x13]
        
        if (esi_2 u>= eax_6)
            break
        
        while (true)
            if ((esi_2[0x12] & 0xffff0000) != 0)
                int32_t eax_7 = esi_2[5]
                
                if (eax_7 == 1 || eax_7 == 2 || eax_7 == 3)
                    edx_1 = sub_4c80d0(esi_2, edx_1, __saved_ebx_1)
                    __saved_ebx_1 = data_27e7bb8
                else if (eax_7 != 0 && eax_7 != 4)
                    sub_4c5870("Halt", &data_83f3d3, "Network.cpp", 0x62b, "NetworkUpdateReceive")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (esi_2[9] != 4)
                    break
                
                edx_1 = sub_4c8920(esi_2)
                __saved_ebx_1 = data_27e7bb8
                break
            
            esi_2 = &esi_2[0x13]
            
            if (esi_2 u>= eax_6)
                goto label_4c8b20
    
    label_4c8b20:
    int32_t** __saved_ebx = __saved_ebx_1
    int32_t esi
    int32_t var_8_1 = esi
    int32_t edi
    int32_t var_c_1 = edi
    void* edi_4 = data_27e7bb8
    
    if (*(edi_4 + 0x40) == 0)
        return 
    
    do
        int32_t* eax_12 = sub_4db440(edi_4 + 0x38)
        
        if (eax_12[1] s<= 0x3e8)
            sub_4c5870("message->messageType > NETMSG_MIN_VALUE", &data_83f3d3, "Network.cpp", 0x5e9, 
                "NetworkProcessMessages")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c89f0(eax_12)
        eax_6 = eax_12[1]
        
        if (eax_6 == 0x3eb || eax_6 == 0x3ee || eax_6 == 0xfa2)
            int32_t ecx = *eax_12
            
            if (ecx != 0)
                void* edx_2 = data_27e7bb8
                eax_6 = zx.d(ecx.w)
                
                if (eax_6 u< *(edx_2 + 4))
                    eax_6 = eax_6 * 0x4c + *edx_2
                    
                    if (*(eax_6 + 0x48) == ecx)
                        sub_4c6a10(eax_6)
    while (*(edi_4 + 0x40) != 0)
    
    if (*(edi_4 + 0x40) == 0)
        return 
    
    sub_4c5870("netMessages.IsEmpty()", &data_83f3d3, "Network.cpp", 0x60c, "NetworkProcessMessages")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

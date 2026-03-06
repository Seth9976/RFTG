// 函数名称: sub_43e900
// 虚拟地址: 0x43e900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43e900(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696aea
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_550 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31662a8 & 1) == 0)
        data_31662a8.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c110, "btnAuto")
        int32_t* ecx_1 = data_307c110
        data_bebcec = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "btnNovelty")
        int32_t* edx_1 = data_307c110
        data_bebcf0 = eax_5
        data_bebcf4 = sub_4f5220(edx_1, "btnRare")
        int32_t eax_8 = sub_4f5220(data_307c110, "btnGenes")
        int32_t* ecx_2 = data_307c110
        data_bebcf8 = eax_8
        data_bebcfc = sub_4f5220(ecx_2, "btnAlien")
        int32_t var_8_2 = 0xffffffff
    
    int32_t edi = 0
    
    while (true)
        if (arg1 == *((edi << 2) + &data_bebce8))
            *(sub_46b2b0(*(data_27e7a40 + 0x74)) + 0x1f84) = edi
        else
            edi += 1
            
            if (edi u< 6)
                continue
            else
                if ((data_31662a8 & 2) == 0)
                    data_31662a8.d |= 2
                    int32_t var_8_3 = 1
                    data_31662a4 = sub_4f5220(data_307c110, "btnCards")
                    int32_t var_8_4 = 0xffffffff
                
                if (arg1 != data_31662a4)
                    if ((data_31662a8 & 4) == 0)
                        data_31662a8.d |= 4
                        int32_t var_8_5 = 2
                        data_31662a0 = sub_4f5220(data_307c110, "btnAction")
                        int32_t var_8_6 = 0xffffffff
                    
                    if (arg1 != data_31662a0)
                        break
                    
                    void* edx_5 = data_27e7a40
                    int32_t var_540 = 0
                    int32_t var_53c_1 = 0
                    int32_t var_538_1 = 0
                    void* eax_20 = *(edx_5 + 0x548)
                    int32_t esi_7 = *(eax_20 + 0xbfac)
                    var_540 = 3
                    int32_t var_53c_2 = esi_7
                    int32_t edx_6 = sub_445e20(sub_463f60(eax_20 + 0x43960, esi_7))
                    void* eax_22 = data_27e7a40
                    sub_472e60(*(eax_22 + 0x74), edx_6, &var_540, *(eax_22 + 0x548))
                else
                    void* ebx_1 = data_27e7a40
                    void* esi_1 = *(ebx_1 + 0x548)
                    
                    if (esi_1 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_3 = *(esi_1 + 0x45844)
                    int32_t i = sx.d(*(*(ebx_1 + 0x74) * 0xb4 + edx_3 + 0x4a))
                    int32_t ecx_3 = 0
                    int32_t var_534[0x148]
                    
                    while (i != 0xffffffff)
                        var_534[ecx_3] = i
                        i = sx.d(*(edx_3 + ((i * 5 + 0x11d) << 2)))
                        ecx_3 += 1
                    
                    int32_t edx_4 = 0
                    *(esi_1 + 0x43880) = 0
                    
                    if (ecx_3 s> 0)
                        do
                            void* edi_2 = *(ebx_1 + 0x548)
                            
                            if (edi_2 == 0)
                                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            *(esi_1 + (*(esi_1 + 0x43880) << 2) + 0x43360) =
                                sx.d(*(*(*(edi_2 + 0x45844) + var_534[edx_4] * 0x14 + 0x46c) + 4))
                            *(esi_1 + 0x43880) += 1
                            edx_4 += 1
                        while (edx_4 s< ecx_3)
        
        sub_447b40()
        break
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return 0
}

// 函数名称: sub_441050
// 虚拟地址: 0x441050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_441050(int32_t arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694c3e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165d00 & 1) == 0)
        data_3165d00.d |= 1
        int32_t var_c_1 = 0
        data_3165cfc = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    void* eax_5 = *(data_27e7a40 + 0x548)
    
    if (eax_5 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_7 = *(eax_5 + 0x45844)
    int32_t i_1 = 0
    
    if (*(eax_7 + 0x458) s> 0)
        int32_t i
        
        do
            int32_t edi_1 = data_3165cfc
            int32_t var_20 = 0
            int32_t i_2 = i_1
            void* eax_8
            int32_t ecx_1
            eax_8, ecx_1 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (edi_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_2 = *(eax_8 + (edi_1 << 2) + 0x30)
            int128_t* eax_9
            
            if (edx_2 != 0)
                eax_9 = sub_4fc1e0(ecx_1, edx_2)
            else
                eax_9, edx_2 = sub_4fc0d0()
                *(eax_9 + 4) = &data_83f3d3
                *(eax_8 + (edi_1 << 2) + 0x30) = *(eax_9 + 0x1bc)
            
            char* esi_3 = *(eax_8 + 4)
            
            if (*(esi_3 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_3 == 0)
                sub_520800(eax_9, edx_2.b, esi_3, 0)
                
                if (*esi_3 == 0)
                    sub_509540(esi_3)
            
            void* eax_13
            char edx_5
            eax_13, edx_5 = sub_4f7720(&var_20, edi_1 * 0x118 + ***esi_3, eax_9)
            int32_t esi_4 = *(eax_13 + 0x434)
            int32_t var_40_1 = 0
            sub_4fa4e0(esi_4, arg2, edx_5)
            int32_t eax_15
            int32_t ecx_5
            eax_15, ecx_5 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (arg2 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_6 = *(eax_15 + (arg2 << 2) + 0x30)
            int128_t* eax_16
            
            if (edx_6 != 0)
                eax_16 = sub_4fc1e0(ecx_5, edx_6)
            else
                eax_16 = sub_4fc0d0()
                *(eax_16 + 4) = &data_83f3d3
                *(eax_15 + (arg2 << 2) + 0x30) = *(eax_16 + 0x1bc)
            
            long double x87_r7_1 = float.t(0)
            int128_t* ecx_7 = eax_16
            long double x87_r6_1 = fconvert.t(arg3)
            x87_r6_1 - x87_r7_1
            eax_16.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_16:1.b & 1) == 0)
                *(ecx_7 + 0x14) = fconvert.s(x87_r7_1)
                ecx_7[1].d = fconvert.s(x87_r7_1)
            
            i = i_1 + 1
            i_1 = i
        while (i s< sx.d(*(eax_7 + 0x458)))
    
    fsbase->NtTib.ExceptionList = ExceptionList
}

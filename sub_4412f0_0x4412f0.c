// 函数名称: sub_4412f0
// 虚拟地址: 0x4412f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4412f0(int32_t arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694c0e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t edi
    int32_t var_40 = edi
    int32_t var_44 = __security_cookie ^ &var_40
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165cf8 & 1) == 0)
        data_3165cf8.d |= 1
        int32_t var_c_1 = 0
        data_3165cf4 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_c_2 = 0xffffffff
    
    void* ecx_1 = *(data_27e7a40 + 0x548)
    
    if (ecx_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ecx_2 = *(ecx_1 + 0x45844)
    int32_t ebx = sx.d(*(ecx_2 + 0x458))
    void* eax_6 = ecx_2 + 0xaa
    void* var_2c = ecx_2
    int32_t var_30 = sx.d(*(ecx_2 + 0xaa))
    
    if (ebx s> 1)
        void* edx_1 = ecx_2 + 0x15e
        int32_t i_4 = ebx - 1
        int32_t i
        
        do
            edi = sx.d(*edx_1)
            
            if (var_30 s<= edi)
                var_30 = edi
            
            edx_1 += 0xb4
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t i_1 = 0
    int32_t i_2 = 0
    
    if (ebx s> 0)
        void* var_24_1 = eax_6
        
        do
            if (sx.d(*eax_6) == var_30)
                int32_t esi_1 = data_3165cf4
                int32_t var_20 = 0
                int32_t i_3 = i_1
                
                if (arg1 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t ecx_4 = zx.d(arg1.w)
                void* ebx_1
                
                if (ecx_4 u< data_be1cbc)
                    ebx_1 = data_be1cb8
                
                if (ecx_4 u>= data_be1cbc || *(ecx_4 * 0x438 + ebx_1 + 0x434) != arg1)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_5 = ecx_4 * 0x438
                void* edi_3 = ebx_1 + ecx_5
                
                if (esi_1 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_4 = *(edi_3 + (esi_1 << 2) + 0x30)
                int128_t* eax_8
                
                if (edx_4 != 0)
                    eax_8 = sub_4fc1e0(ecx_5, edx_4)
                else
                    eax_8, edx_4 = sub_4fc0d0()
                    *(eax_8 + 4) = &data_83f3d3
                    *(edi_3 + (esi_1 << 2) + 0x30) = *(eax_8 + 0x1bc)
                
                char* edi_4 = *(edi_3 + 4)
                
                if (*(edi_4 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*edi_4 == 0)
                    sub_520800(eax_8, edx_4.b, edi_4, 0)
                    
                    if (*edi_4 == 0)
                        sub_509540(edi_4)
                
                void* eax_12
                char edx_7
                eax_12, edx_7 = sub_4f7720(&var_20, esi_1 * 0x118 + ***edi_4, eax_8)
                int32_t esi_4 = *(eax_12 + 0x434)
                int32_t var_48_1 = 0
                sub_4fa4e0(esi_4, arg2, edx_7)
                
                if (esi_4 == 0)
                    sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                        "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t eax_15 = zx.d(esi_4.w)
                int32_t ecx_10
                int32_t edx_8
                
                if (eax_15 u< data_be1cbc)
                    edx_8 = data_be1cb8
                    ecx_10 = eax_15 * 0x438
                
                if (eax_15 u>= data_be1cbc || *(ecx_10 + edx_8 + 0x434) != esi_4)
                    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                        "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t esi_5 = edx_8 + eax_15 * 0x438
                
                if (arg2 s>= 0x100)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_9 = *(esi_5 + (arg2 << 2) + 0x30)
                int128_t* eax_17
                
                if (edx_9 != 0)
                    eax_17 = sub_4fc1e0(ecx_10, edx_9)
                else
                    eax_17 = sub_4fc0d0()
                    *(eax_17 + 4) = &data_83f3d3
                    *(esi_5 + (arg2 << 2) + 0x30) = *(eax_17 + 0x1bc)
                
                long double x87_r7_1 = float.t(0)
                int128_t* ecx_12 = eax_17
                long double x87_r6_1 = fconvert.t(arg3)
                x87_r6_1 - x87_r7_1
                eax_17.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_17:1.b & 1) == 0)
                    *(ecx_12 + 0x14) = fconvert.s(x87_r7_1)
                    ecx_12[1].d = fconvert.s(x87_r7_1)
                
                ecx_2 = var_2c
            
            i_1 = i_2 + 1
            eax_6 = var_24_1 + 0xb4
            i_2 = i_1
            var_24_1 = eax_6
        while (i_1 s< sx.d(*(ecx_2 + 0x458)))
    
    fsbase->NtTib.ExceptionList = ExceptionList
}

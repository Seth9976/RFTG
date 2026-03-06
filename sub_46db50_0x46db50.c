// 函数名称: sub_46db50
// 虚拟地址: 0x46db50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46db50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void var_348
    void var_348
    int32_t eax_1 = __security_cookie ^ &var_348
    int32_t edi = 0
    void* entry_ebx
    int32_t esi
    
    if (arg4 != 0 && arg4 != 1)
        esi = arg1
    else if (arg2 == 0)
        esi = arg1
        int32_t edx
        arg4 = sub_4a8600(sub_46d940(esi, edx, entry_ebx), entry_ebx, arg3, esi)
    else
        if (arg2 != 1)
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x85c, 
                "sumbmit_player_choose_oort_kind")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        esi = arg1
        int32_t eax_7
        int32_t ecx_1
        int32_t edx_1
        eax_7, ecx_1, edx_1 = sub_46da50(entry_ebx, esi, 5)
        void var_330
        void* var_354_1 = &var_330
        int32_t var_358_2 = 5
        int32_t eax_9 = sub_49dea0(esi, edx_1, ecx_1, entry_ebx)
        int32_t var_344_1 = 0
        
        if (eax_9 s> 0)
            do
                int32_t var_32c[0xc8]
                void* esi_1 = var_32c[edi * 2]
                int32_t ecx_2 = *(esi_1 + 8)
                int32_t var_334_1 = *(esi_1 + 0xc)
                
                if ((ecx_2 & 0x2000) != 0)
                    var_344_1 += sx.d(*(esi_1 + 0x10))
                
                if ((ecx_2 & 0x20000) != 0 && sub_46d9b0(0, 0, entry_ebx, arg1) != 0)
                    var_344_1 += sx.d(*(esi_1 + 0x10))
                
                edi += 1
            while (edi s< eax_9)
            
            esi = arg1
        
        int32_t eax_15 = sub_46da50(entry_ebx, esi, 2)
        int32_t eax_16 = sub_46da50(entry_ebx, esi, 3)
        int32_t edx_4 = eax_7
        
        if (edx_4 s<= var_344_1)
            edx_4 = var_344_1
        
        int32_t ecx_8 = eax_16
        
        if (eax_16 s<= eax_15)
            ecx_8 = eax_15
        
        int32_t ecx_9
        int32_t edx_5
        
        if (edx_4 s> ecx_8)
            edx_5 = var_344_1
            ecx_9 = eax_7
            
            if (ecx_9 s<= edx_5)
                ecx_9 = edx_5
            
            goto label_46dc91
        
        if (eax_16 s> eax_15)
            arg4 = 3
        else
            edx_5 = var_344_1
            ecx_9 = eax_15
        label_46dc91:
            
            if (eax_16 == ecx_9)
                arg4 = 3
            else if (eax_15 == ecx_9)
                arg4 = 2
            else if (edx_5 == ecx_9)
                arg4 = 4
            else if (eax_7 == ecx_9)
                arg4 = 5
    
    int32_t var_354_4 = 0
    sub_469e10(entry_ebx, esi, 0x18, arg4, 0, 0, 0, 0)
    sub_469ff0(esi)
    sub_5a6aba(eax_1 ^ &var_348)
    return 0
}

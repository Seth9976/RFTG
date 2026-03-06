// 函数名称: sub_501b20
// 虚拟地址: 0x501b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_501b20(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t edi = 0
    int32_t* entry_ebx
    
    if (esi != 0)
        arg1 = *(esi + 0xc)
        *(esi + 0x10) = 0
        
        if (arg1 != 0)
            if (*(*(arg3 + 0xc) + 0x10) != 0x13)
                sub_4c5870("pField->pDefMap->defType == DT_ATTRIB_MAP", &data_83f3d3, 
                    "DefParseTree.cpp", 0x35e, "DefParseReadAttribMap")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            void* ecx = *(arg3 + 0x1c)
            entry_ebx[1] = sub_4cce80(arg1 * 8)
            int32_t* i = *(esi + 4)
            
            while (i != 0)
                int32_t* eax_5 = *i
                int32_t edx_1 = entry_ebx[1]
                i = i[1]
                
                if (sub_501640(edx_1 + (edi << 3), edx_1, ecx, eax_5).b != 0)
                    edi += 1
            
            *entry_ebx = edi
            
            if (edi == 0)
                char* eax_4 = entry_ebx[1]
                
                if (eax_4 != 0)
                    _aligned_free_base(eax_4)
                
                entry_ebx[1] = 0
            
            return 
    
    *entry_ebx = 0
    entry_ebx[1] = 0
}

// 函数名称: sub_500770
// 虚拟地址: 0x500770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_500770(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_18 = ebx
    int32_t* esi = arg1
    int32_t* eax = esi[1]
    
    if (eax != 0)
        while (true)
            int32_t* ecx_1 = eax[1]
            void** esi_1 = *eax
            int32_t eax_1 = esi_1[2]
            
            if (eax_1 != 0)
                sub_500770(eax_1)
                esi_1[2] = 0
            
            if (esi_1[2] != 0)
                sub_4c5870("pParseItem->pSubTree == NULL", &data_83f3d3, "DefParseTree.cpp", 0x43, 
                    "DefParseItemFree")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void** edi_1 = data_30785c8
            int32_t* ecx_2 = edi_1[1]
            int32_t eax_5 = edi_1[2] * 0x14
            int32_t var_14_1 = eax_5
            
            if (ecx_2 == 0)
            label_500816:
                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                    0x10c, "XTypedAllocator<struct DefParseItem>::Free")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            while (true)
                void* edx_1 = &ecx_2[1]
                ecx_2 = *ecx_2
                
                if (esi_1 u>= edx_1 && esi_1 u< edx_1 + eax_5)
                    if (mods.dp.d(sx.q(esi_1 - edx_1), 0x14) == 0)
                        break
                    
                    eax_5 = var_14_1
                
                if (ecx_2 == 0)
                    goto label_500816
            
            edi_1[3] -= 1
            sub_556140(esi_1)
            *esi_1 = *edi_1
            *edi_1 = esi_1
            eax = ecx_1
            
            if (eax == 0)
                esi = arg1
                break
    
    sub_5041e0(&esi[1])
    
    if (esi[3] == 0)
        return sub_5042f0(esi, data_30785c8 + 0x10)
    
    sub_4c5870("pParseTree->itemList.GetSize() == 0", &data_83f3d3, "DefParseTree.cpp", 0x3c, 
        "DefParseTreeFree")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

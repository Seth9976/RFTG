// 函数名称: sub_520f50
// 虚拟地址: 0x520f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_520f50(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t result = sub_520ec0(*esi)
    
    if (esi[1] != 0)
        int32_t edi
        int32_t var_10_1 = edi
        
        do
            int32_t* ecx_1 = esi[1]
            ecx_1[5] = ecx_1
            int32_t* esi_1 = data_26a652c
            
            if (esi_1 == 0)
            label_520fcf:
                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                    0x10c, "XTypedAllocator<struct SphereTreeNode>::Free")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            while (true)
                void* edx_1 = &esi_1[1]
                esi_1 = *esi_1
                
                if (ecx_1 u>= edx_1 && ecx_1 u< edx_1 + data_26a6530 * 0x1c)
                    int32_t eax_5
                    int32_t edx_2
                    edx_2:eax_5 = sx.q(ecx_1 - edx_1)
                    result = divs.dp.d(edx_2:eax_5, 0x1c)
                    
                    if (mods.dp.d(edx_2:eax_5, 0x1c) == 0)
                        break
                
                if (esi_1 == 0)
                    goto label_520fcf
            
            int32_t edx_4 = data_26a6528
            data_26a6534 -= 1
            esi = arg1
            *ecx_1 = edx_4
            data_26a6528 = ecx_1
        while (esi[1] != 0)
    
    *esi = 0
    esi[1] = 0
    return result
}

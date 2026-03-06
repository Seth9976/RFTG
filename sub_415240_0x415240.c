// 函数名称: sub_415240
// 虚拟地址: 0x415240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_415240(void* arg1)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x1dc)
    int32_t edi = *(arg1 + 0x1dc)
    
    if (edi == 2)
        int32_t esi_1 = *(arg1 + 0x140)
        int32_t eax_1 = 0
        
        if (esi_1 s> 0)
            void* edx_1 = arg1 + 0x30
            
            do
                int32_t ecx = *edx_1
                
                if (ecx == 2 || ecx == 6)
                    return 0x8f
                
                eax_1 += 1
                edx_1 += 0x50
            while (eax_1 s< esi_1)
    
    if ((edi != 2 || edi != 2) && edi != 3)
        return 0x6a
    
    return 0x45
}

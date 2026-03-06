// 函数名称: sub_413990
// 虚拟地址: 0x413990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_413990(void* arg1)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x140)
    int32_t esi = *(arg1 + 0x140)
    int32_t result = 0
    
    if (esi s> 0)
        void* edx_1 = arg1 + 0x30
        
        do
            int32_t ecx = *edx_1
            
            if (ecx == 2 || ecx == 6)
                result.b = 1
                return result
            
            result += 1
            edx_1 += 0x50
        while (result s< esi)
    
    result.b = 0
    return result
}

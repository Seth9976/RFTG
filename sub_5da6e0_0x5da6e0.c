// 函数名称: sub_5da6e0
// 虚拟地址: 0x5da6e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5da6e0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t esi = *(arg3 + 8)
    int32_t esi = *(arg3 + 8)
    int32_t result = 0
    
    if (esi s> 0)
        int32_t* edx = *(arg3 + 0x10)
        
        do
            int32_t* ecx = *edx
            
            if (*ecx == arg4 && ecx[1] == arg5)
                return result
            
            result += 1
            edx = &edx[1]
        while (result s< esi)
    
    return 0xffffffff
}

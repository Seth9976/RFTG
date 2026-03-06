// 函数名称: sub_446010
// 虚拟地址: 0x446010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_446010(int32_t arg1, int32_t arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x1f30)
    int32_t edx = *(arg3 + 0x1f30)
    int32_t result = 0
    
    if (edx s> 0)
        void* ecx = arg3 + 0x1a10
        
        do
            if (*ecx == *(arg4 + 0xac))
                result.b = 1
                return result
            
            result += 1
            ecx += 4
        while (result s< edx)
    
    result.b = 0
    return result
}

// 函数名称: sub_46b4b0
// 虚拟地址: 0x46b4b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46b4b0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg1)
    void* eax = sub_46b2b0(arg1)
    int32_t edx = *(eax + 0x550)
    int32_t result = 0
    
    if (edx s> 0)
        void* ecx_1 = eax + 0x30
        
        do
            if (*ecx_1 == *(arg2 + 0xac))
                return result
            
            result += 1
            ecx_1 += 4
        while (result s< edx)
    
    return 0xffffffff
}

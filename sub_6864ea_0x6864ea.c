// 函数名称: sub_6864ea
// 虚拟地址: 0x6864ea
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_6864ea(char* arg1, int32_t arg2 @ eax, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg4 != 0)
    if (arg4 != 0)
        *arg1 = 0x2d
        arg1 = &arg1[1]
        arg2 = neg.d(arg2)
    
    char* esi = arg1
    uint32_t edx_2
    
    do
        int32_t edx_1 = 0
        uint32_t temp1_1 = modu.dp.d(edx_1:arg2, arg3)
        arg2 = divu.dp.d(edx_1:arg2, arg3)
        
        if (temp1_1 u<= 9)
            edx_2.b = temp1_1.b + 0x30
        else
            edx_2.b = temp1_1.b + 0x57
        
        *arg1 = edx_2.b
        arg1 = &arg1[1]
    while (arg2 != 0)
    
    *arg1 = arg2.b
    void* ecx = arg1 - 1
    
    do
        edx_2.b = *esi
        arg2.b = *ecx
        *ecx = edx_2.b
        ecx -= 1
        *esi = arg2.b
        esi = &esi[1]
    while (esi u< ecx)
    
    return arg2
}

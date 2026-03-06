// 函数名称: sub_5e2710
// 虚拟地址: 0x5e2710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2710(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int32_t ecx = *(ebx + 0x10)
    void* esi = ecx + eax_2 - 6
    char edx = *(ecx + eax - 1)
    char* ecx_1 = ecx + eax - 6
    char var_5 = ecx_1[4]
    char var_6 = ecx_1[3]
    char var_7 = ecx_1[2]
    char var_8 = ecx_1[1]
    int32_t edi = 0
    char var_9 = *ecx_1
    int32_t eax_9 = eax_2
    
    if (esi u>= ecx)
        do
            edi += eax - 0x60
            *(esi + 4) = var_5
            *(esi + 3) = var_6
            *(esi + 2) = var_7
            *(esi + 1) = var_8
            *esi = var_9
            *(esi + 5) = edx
            esi -= 6
            
            if (edi * 2 s>= eax_9)
                int32_t eax_10 = sx.d(ecx_1[0xffffffff])
                ecx_1 -= 6
                var_5 = ((sx.d(ecx_1[4]) + sx.d(var_5)) s>> 1).b
                var_6 = ((sx.d(ecx_1[3]) + sx.d(var_6)) s>> 1).b
                var_7 = ((sx.d(ecx_1[2]) + sx.d(var_7)) s>> 1).b
                var_8 = ((sx.d(ecx_1[1]) + sx.d(var_8)) s>> 1).b
                var_9 = ((sx.d(*ecx_1) + sx.d(var_9)) s>> 1).b
                eax_9 = eax_2
                edx = ((sx.d(edx) + eax_10) s>> 1).b
                edi -= eax_9
        while (esi u>= ecx)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_9
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}

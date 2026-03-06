// 函数名称: sub_5e2970
// 虚拟地址: 0x5e2970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2970(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    int32_t ecx = *(ebx + 0x10)
    void* esi = ecx + eax_2 - 8
    char* ecx_1 = ecx + eax - 8
    char var_5 = ecx_1[6]
    char edx = ecx_1[7]
    char var_6 = ecx_1[5]
    char var_7 = ecx_1[4]
    char var_8 = ecx_1[3]
    char var_9 = ecx_1[2]
    char var_a = ecx_1[1]
    int32_t edi = 0
    char var_b = *ecx_1
    int32_t eax_11 = eax_2
    
    if (esi u>= ecx)
        do
            *(esi + 6) = var_5
            edi += eax - 0x80
            *(esi + 5) = var_6
            *(esi + 4) = var_7
            *(esi + 3) = var_8
            *(esi + 2) = var_9
            *(esi + 1) = var_a
            *esi = var_b
            *(esi + 7) = edx
            esi -= 8
            
            if (edi * 2 s>= eax_11)
                int32_t eax_12 = sx.d(ecx_1[0xffffffff])
                ecx_1 -= 8
                var_5 = ((sx.d(ecx_1[6]) + sx.d(var_5)) s>> 1).b
                var_6 = ((sx.d(ecx_1[5]) + sx.d(var_6)) s>> 1).b
                var_7 = ((sx.d(ecx_1[4]) + sx.d(var_7)) s>> 1).b
                var_8 = ((sx.d(ecx_1[3]) + sx.d(var_8)) s>> 1).b
                var_9 = ((sx.d(ecx_1[2]) + sx.d(var_9)) s>> 1).b
                var_a = ((sx.d(ecx_1[1]) + sx.d(var_a)) s>> 1).b
                var_b = ((sx.d(*ecx_1) + sx.d(var_b)) s>> 1).b
                eax_11 = eax_2
                edx = ((sx.d(edx) + eax_12) s>> 1).b
                edi -= eax_11
        while (esi u>= ecx)
        
        ebx = arg1
    
    *(ebx + 0x50) += 1
    *(ebx + 0x18) = eax_11
    int32_t result = *(ebx + 0x50)
    
    if (*(ebx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ebx + (result << 2) + 0x28))(ebx, arg2)
}

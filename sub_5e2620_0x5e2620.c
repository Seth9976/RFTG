// 函数名称: sub_5e2620
// 虚拟地址: 0x5e2620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2620(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    char* ecx = *(esi + 0x10)
    char var_7 = ecx[1]
    int32_t edx = eax_2
    char var_5 = ecx[2]
    void* i = &ecx[edx]
    void* eax_3
    eax_3.b = *ecx
    int32_t edi = 0
    int32_t var_14_1 = edx
    char var_6 = ecx[3]
    
    if (ecx u< i)
        void* esi_1 = &ecx[2]
        void* ecx_1 = &ecx[2]
        
        do
            edi += edx
            esi_1 += 4
            
            if (edi * 2 s>= eax - 0x40)
                int32_t edx_1
                edx_1.b = var_7
                *ecx_1 = var_5
                *(ecx_1 - 1) = edx_1.b
                *(ecx_1 + 1) = var_6
                *(ecx_1 - 2) = eax_3.b
                var_7 = ((sx.d(*(esi_1 - 1)) + sx.d(edx_1.b)) s>> 1).b
                var_5 = ((sx.d(*esi_1) + sx.d(var_5)) s>> 1).b
                ecx_1 += 4
                eax_3 = (sx.d(eax_3.b) + sx.d(*(esi_1 - 2))) s>> 1
                edi -= eax - 0x40
                var_6 = ((sx.d(*(esi_1 + 1)) + sx.d(var_6)) s>> 1).b
            
            edx = var_14_1
        while (ecx_1 - 2 u< i)
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edx
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}

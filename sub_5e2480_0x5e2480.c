// 函数名称: sub_5e2480
// 虚拟地址: 0x5e2480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e2480(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(edi + 8)))
    char* ecx = *(edi + 0x10)
    int32_t var_c = &ecx[eax_2]
    char* esi = ecx
    int32_t eax_3
    eax_3.b = *esi
    char edx = esi[1]
    int32_t ebx = 0
    
    if (ecx u< var_c)
        do
            int32_t ebx_1 = ebx + eax_2
            esi = &esi[2]
            
            if (ebx_1 * 2 s< eax - 0x20)
                ebx = ebx_1
            else
                *ecx = eax_3.b
                ecx[1] = edx
                ecx = &ecx[2]
                eax_3 = (sx.d(eax_3.b) + sx.d(*esi)) s>> 1
                edx = ((sx.d(edx) + sx.d(esi[1])) s>> 1).b
                ebx = ebx_1 - (eax - 0x20)
        while (ecx u< var_c)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_2
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}

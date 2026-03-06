// 函数名称: sub_68b040
// 虚拟地址: 0x68b040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68b040(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t esi_1 = arg2 + arg1[1]
    int32_t edi = *arg1
    
    if (edi s> eax - ((esi_1 + 7) s>> 3))
        arg1[3] = 0
        arg1[1] = 1
        *arg1 = eax
        return eax
    
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = sx.q(esi_1)
    int32_t eax_4 = (eax_2 + (edx_2 & 7)) s>> 3
    arg1[3] += eax_4
    int32_t eax_5 = eax_4 + edi
    arg1[1] = esi_1 & 7
    *arg1 = eax_5
    return eax_5
}

// 函数名称: sub_598520
// 虚拟地址: 0x598520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_598520(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg4 s> 0)
    if (arg4 s> 0)
        char* ecx_1 = arg3
        void* esi_2 = arg2 - ecx_1
        char* edi_2 = arg1 - ecx_1
        int32_t i_1 = arg4
        int32_t i
        
        do
            *(edi_2 + ecx_1) = ((zx.d(*(esi_2 + ecx_1)) * 3 + zx.d(*ecx_1) + 2) s>> 2).b
            ecx_1 = &ecx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return arg1
}

// 函数名称: sub_65ca30
// 虚拟地址: 0x65ca30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65ca30(void* arg1, void* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: void* ecx = *(arg2 + 0x504)
    void* ecx = *(arg2 + 0x504)
    int32_t result = 0
    
    if (arg3 != 0 && arg4 != 0)
        result = sub_649ad0(arg1, ecx * 4)
        
        if (ecx s> 0)
            int32_t* esi_1 = arg3 - arg4
            int32_t* ecx_3 = arg4
            int32_t* edi_2 = result - arg4
            arg2 = ecx
            void* i
            
            do
                int32_t edx_7 = ((*ecx_3 & 0x7fff) * arg5
                    + (*(esi_1 + ecx_3) & 0x7fff) * (0x10000 - arg5) + 0x8000) s>> 0x10
                *(edi_2 + ecx_3) = edx_7
                
                if ((*(esi_1 + ecx_3) & 0x8000) != 0 && (*ecx_3 & 0x8000) != 0)
                    *(edi_2 + ecx_3) = edx_7 | 0x8000
                
                ecx_3 = &ecx_3[1]
                i = arg2
                arg2 -= 1
            while (i != 1)
    
    return result
}

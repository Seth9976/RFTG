// 函数名称: sub_671800
// 虚拟地址: 0x671800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_671800(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ esi)
{
    // 第一条实际指令: int32_t edi = arg3
    int32_t edi = arg3
    *(arg4 + 0x78) = arg1
    *(arg4 + 0x7c) = 0
    
    while (true)
        if (*(arg4 + 0x7c) == 0)
            if (edi u<= 0xffffffff)
                *(arg4 + 0x7c) = edi
                edi = 0
            else
                *(arg4 + 0x7c) = 0xffffffff
                edi += 1
        
        while (true)
            int32_t eax = sub_6746d0(arg4 + 0x78, 0)
            
            if (eax != 0)
                char* eax_2 = *(arg4 + 0x90)
                
                if (eax_2 == 0)
                    sub_664320(arg4, "zlib error")
                    noreturn
                
                sub_664320(arg4, eax_2)
                noreturn
            
            if (*(arg4 + 0x88) == eax)
                sub_66fdb0(arg4, *(arg4 + 0xb0), *(arg4 + 0xb4))
            
            if (edi != 0)
                break
            
            if (*(arg4 + 0x7c) u<= edi)
                int32_t eax_1 = *(arg4 + 0x104)
                
                if (eax_1 != 0)
                    *(arg4 + 0x104) = *(arg4 + 0x108)
                    *(arg4 + 0x108) = eax_1
                
                sub_6713f0(arg4)
                *(arg4 + 0x170) += 1
                int32_t result = *(arg4 + 0x16c)
                
                if (result != 0 && *(arg4 + 0x170) u>= result)
                    result = sub_665b40(arg4)
                
                return result
}

// 函数名称: sub_677f50
// 虚拟地址: 0x677f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_677f50(void* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    int32_t edx_1 = sub_676dc0(*(arg1 + 0xb1c), edx, arg1 + 0x94, arg1)
    sub_676dc0(*(arg1 + 0xb28), edx_1, arg1 + 0x988, arg1)
    sub_677d50(arg1, arg1 + 0xb30)
    void* result = 0x12
    
    while (true)
        if (*(arg1 + (zx.d(*(result + 0x8337ec)) << 2) + 0xa7e) == 0)
            if (*(arg1 + (zx.d(*(result + 0x8337eb)) << 2) + 0xa7e) != 0)
                *(arg1 + 0x16a8) += (result - 1) * 3 + 0x11
                return result - 1
            
            if (*(arg1 + (zx.d(*(result + 0x8337ea)) << 2) + 0xa7e) != 0)
                *(arg1 + 0x16a8) += (result - 2) * 3 + 0x11
                return result - 2
            
            if (*(arg1 + (zx.d(*(result + 0x8337e9)) << 2) + 0xa7e) != 0)
                result -= 3
            else
                result -= 4
                
                if (result s< 3)
                    break
                
                continue
        
        *(arg1 + 0x16a8) += result * 3 + 0x11
        return result
    
    *(arg1 + 0x16a8) += result * 3 + 0x11
    return result
}

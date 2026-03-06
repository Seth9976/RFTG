// 函数名称: sub_492ac0
// 虚拟地址: 0x492ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_492ac0()
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    
    for (int32_t i = 1; i s<= 9; i += 1)
        if (i != 4 && i != 6)
            for (int32_t j = i + 1; j s<= 9; j += 1)
                bool cond:0_1
                
                if (j != 4)
                    if (j == 6)
                        cond:0_1 = i != 5
                        goto label_492af4
                    
                label_492af6:
                    *((eax << 3) + &data_8c6820) = i
                    *((eax << 3) + &data_8c6824) = j
                    eax += 1
                else
                    cond:0_1 = i != 3
                label_492af4:
                    
                    if (not(cond:0_1))
                        goto label_492af6
    
    *((eax << 3) + &data_8c6820) = 0
    *((eax << 3) + &data_8c6824) = 1
    *((eax << 3) + &data_8c6828) = 0
    *((eax << 3) + &data_8c682c) = 2
    *((eax << 3) + &data_8c6830) = 0
    *((eax << 3) + &data_8c6834) = 3
    *((eax << 3) + &data_8c6838) = 0
    *((eax << 3) + &data_8c683c) = 5
    *((eax << 3) + &data_8c6840) = 0
    *((eax << 3) + &data_8c6844) = 7
    *((eax << 3) + &data_8c6848) = 0
    *((eax << 3) + &data_8c684c) = 8
    *((eax << 3) + &data_8c6850) = 0
    *((eax << 3) + &data_8c6854) = 9
    int32_t result = eax + 7
    
    for (int32_t i_1 = 1; i_1 s<= 9; i_1 += 1)
        if (i_1 != 4 && i_1 != 6)
            for (int32_t j_1 = i_1 + 1; j_1 s<= 9; j_1 += 1)
                bool cond:1_1
                
                if (j_1 != 4)
                    if (j_1 == 6)
                        cond:1_1 = i_1 != 5
                        goto label_492bc2
                    
                label_492bcc:
                    *((result << 3) + &data_8c6820) = i_1 | 0x80
                    *((result << 3) + &data_8c6824) = j_1
                    *((result << 3) + &data_8c6828) = i_1
                    *((result << 3) + &data_8c682c) = j_1 | 0x80
                    result += 2
                else
                    cond:1_1 = i_1 != 3
                label_492bc2:
                    
                    if (not(cond:1_1))
                        goto label_492bcc
    
    return result
}
